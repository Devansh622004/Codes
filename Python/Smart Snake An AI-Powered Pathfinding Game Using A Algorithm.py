# smart_snake_premium_fixed.py
# Requires: pygame
# pip install pygame

import pygame, sys, random, math
from heapq import heappush, heappop
from collections import deque

# ---------- CONFIG ----------
BASE_BLOCK = 20         # base pixel size of a cell (will scale with window)
MIN_GRID = 16           # minimum grid cells (each side)
MAX_GRID = 60           # max cells (keeps performance reasonable)
FPS = 60                # render FPS
MOVE_TICKS_PER_SEC = 10 # snake moves per second
# --------------------------

pygame.init()
info = pygame.display.Info()
screen_w, screen_h = 900, 500  # initial window size (will be adjusted)
screen = pygame.display.set_mode((screen_w, screen_h), pygame.RESIZABLE)
pygame.display.set_caption("SMART SNAKE — A* AI (Premium Edition)")

clock = pygame.time.Clock()
small_font = pygame.font.SysFont("consolas", 20, bold=False)
font = pygame.font.SysFont("consolas", 26, bold=True)
big_font = pygame.font.SysFont("consolas", 48, bold=True)

# Colors
WHITE = (250, 250, 250)
NEON_GREEN = (80, 255, 140)
NEON_BLUE = (100, 200, 255)
NEON_PINK = (255, 80, 170)
FOOD_COLOR = (255, 80, 80)
BG_LIGHT_TOP = (200, 230, 255)
BG_LIGHT_BOTTOM = (180, 200, 240)
BG_NIGHT_TOP = (6, 10, 18)
BG_NIGHT_BOTTOM = (2, 35, 45)
WALL_COLOR = (50, 50, 60)

# ✅ Missing constants added
SNAKE_BORDER = (0, 40, 90)
PATH_COLOR = (0, 180, 255)

# Game state variables (will be initialized in new_game)
GRID = 30   # cells per side (will be computed)
BLOCK = BASE_BLOCK
WIDTH = 0
HEIGHT = 0

# Modes
night_mode = True
maze_mode = True
fullscreen = False

# Timing
move_interval_ms = 1000 // MOVE_TICKS_PER_SEC
move_timer = 0

# A* helpers
def manhattan(a,b): return abs(a[0]-b[0]) + abs(a[1]-b[1])
def neighbors(cell, grid_size):
    x,y = cell
    for dx,dy in ((1,0),(-1,0),(0,1),(0,-1)):
        nx, ny = x+dx, y+dy
        if 0 <= nx < grid_size and 0 <= ny < grid_size:
            yield (nx, ny)

def astar(start, goal, obstacles, grid_size):
    if start == goal: return []
    open_set = []
    heappush(open_set, (manhattan(start, goal), 0, start, None))
    came_from = {}
    gscore = {start:0}
    closed = set()
    while open_set:
        f,g,current,parent = heappop(open_set)
        if current in closed: continue
        came_from[current] = parent
        if current == goal:
            path=[]
            node=current
            while node != start:
                path.append(node)
                node = came_from[node]
            path.reverse()
            return path
        closed.add(current)
        for n in neighbors(current, grid_size):
            if n in closed or n in obstacles: continue
            tentative = g + 1
            if tentative < gscore.get(n, 1e9):
                gscore[n] = tentative
                heappush(open_set, (tentative + manhattan(n, goal), tentative, n, current))
    return None

def safe_moves(head, snake_set, grid_size):
    moves=[]
    for n in neighbors(head, grid_size):
        if n not in snake_set:
            free = sum(1 for m in neighbors(n, grid_size) if m not in snake_set)
            moves.append((free, n))
    moves.sort(reverse=True)
    return [m for _,m in moves]

# UI helpers
def draw_gradient(surface, top, bottom):
    w,h = surface.get_size()
    for i in range(h):
        ratio = i/h
        r = int(top[0]*(1-ratio) + bottom[0]*ratio)
        g = int(top[1]*(1-ratio) + bottom[1]*ratio)
        b = int(top[2]*(1-ratio) + bottom[2]*ratio)
        pygame.draw.line(surface, (r,g,b), (0,i), (w,i))

def grid_to_pixel(cell):
    return cell[0]*BLOCK, cell[1]*BLOCK

def pixel_to_grid(px, py):
    return px//BLOCK, py//BLOCK

# Maze generation: internal obstacles
def generate_obstacles(grid_size, maze_density=0.12):
    obstacles = set()
    # border walls
    for i in range(grid_size):
        obstacles.add((i,0)); obstacles.add((i,grid_size-1))
        obstacles.add((0,i)); obstacles.add((grid_size-1,i))
    # internal random blocks
    cells = grid_size*grid_size
    target_blocks = int(cells * maze_density)
    attempts = 0
    while len(obstacles) < target_blocks + 4*grid_size and attempts < cells*5:
        x = random.randint(2, grid_size-3)
        y = random.randint(2, grid_size-3)
        obstacles.add((x,y))
        attempts +=1
    return obstacles

# Place a random empty cell not in blocked set
def random_empty_cell(snake, obstacles, grid_size):
    tries = 0
    while tries < 5000:
        c = (random.randint(1, grid_size-2), random.randint(1, grid_size-2))
        if c not in snake and c not in obstacles:
            return c
        tries +=1
    for x in range(1, grid_size-1):
        for y in range(1, grid_size-1):
            if (x,y) not in snake and (x,y) not in obstacles:
                return (x,y)
    return None

# Initialize / reset game
def new_game():
    global snake, food, obstacles, score, grid_size, move_timer
    grid_size = GRID
    center = (grid_size//2, grid_size//2)
    snake = [center, (center[0]-1, center[1]), (center[0]-2, center[1])]
    obstacles = set()
    if maze_mode:
        obstacles = generate_obstacles(grid_size, maze_density=0.12)
        for s in snake:
            if s in obstacles: obstacles.remove(s)
    food_cell = random_empty_cell(set(snake), obstacles, grid_size)
    if food_cell is None:
        food_cell = (center[0]+3, center[1])
    food = food_cell
    score = 0
    move_timer = 0
    return

# Resize logic (recompute grid and block to best fit window)
def recompute_grid(w, h):
    global WIDTH, HEIGHT, GRID, BLOCK, screen
    max_cells_x = max(MIN_GRID, min(MAX_GRID, w // BASE_BLOCK))
    max_cells_y = max(MIN_GRID, min(MAX_GRID, h // BASE_BLOCK))
    cells = min(max_cells_x, max_cells_y)
    GRID = cells
    BLOCK = max(8, min(BASE_BLOCK + (w//200) + (h//200), BASE_BLOCK+24))
    WIDTH = GRID * BLOCK
    HEIGHT = GRID * BLOCK
    # center window size to be exact grid*block
    screen = pygame.display.set_mode((WIDTH, HEIGHT), pygame.RESIZABLE)
    return GRID, BLOCK, WIDTH, HEIGHT

# Draw walls
def draw_walls(obstacles):
    for cell in obstacles:
        px,py = grid_to_pixel(cell)
        pygame.draw.rect(screen, WALL_COLOR, (px, py, BLOCK, BLOCK))

# Draw snake with neon glow if night_mode
def draw_snake(snake_list):
    for i,cell in enumerate(snake_list):
        px,py = grid_to_pixel(cell)
        rect = pygame.Rect(px, py, BLOCK, BLOCK)
        if night_mode:
            glow = pygame.Surface((BLOCK+8, BLOCK+8), pygame.SRCALPHA)
            glow.fill((NEON_BLUE[0], NEON_BLUE[1], NEON_BLUE[2], 60))
            screen.blit(glow, (px-4, py-4))
            color = NEON_GREEN if i==0 else (20,180,80)
            pygame.draw.rect(screen, color, rect, border_radius=6)
            pygame.draw.rect(screen, SNAKE_BORDER, rect, width=2, border_radius=6)
        else:
            pygame.draw.rect(screen, (30,150,50) if i==0 else (40,200,80), rect, border_radius=4)

# Draw food (glowing)
def draw_food(cell):
    px,py = grid_to_pixel(cell)
    rect = pygame.Rect(px+4, py+4, BLOCK-8, BLOCK-8)
    if night_mode:
        glow = pygame.Surface((BLOCK+10, BLOCK+10), pygame.SRCALPHA)
        glow.fill((NEON_PINK[0], NEON_PINK[1], NEON_PINK[2], 80))
        screen.blit(glow, (px-5, py-5))
    pygame.draw.rect(screen, FOOD_COLOR, rect, border_radius=6)

# Setup initial window/grid
recompute_grid(screen_w, screen_h)
new_game()
# ensure food variable exists in scope
try:
    food
except NameError:
    food = random_empty_cell(set(snake), set(), GRID)

paused = False
game_over = False
path = None

# Main loop
while True:
    dt = clock.tick(FPS)
    move_timer += dt

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit(); sys.exit()
        if event.type == pygame.VIDEORESIZE:
            screen_w, screen_h = event.w, event.h
            recompute_grid(screen_w, screen_h)
            new_game()
            food = random_empty_cell(set(snake), obstacles, GRID)
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                pygame.quit(); sys.exit()
            if event.key == pygame.K_SPACE:
                paused = not paused
            if event.key == pygame.K_r:
                new_game(); food = random_empty_cell(set(snake), obstacles, GRID); game_over=False; paused=False
            if event.key == pygame.K_f:
                fullscreen = not fullscreen
                if fullscreen:
                    screen = pygame.display.set_mode((0,0), pygame.FULLSCREEN)
                    sw, sh = screen.get_size()
                    recompute_grid(sw, sh)
                else:
                    screen = pygame.display.set_mode((screen_w, screen_h), pygame.RESIZABLE)
                    recompute_grid(screen_w, screen_h)
                new_game(); food = random_empty_cell(set(snake), obstacles, GRID)
            if event.key == pygame.K_n:
                night_mode = not night_mode
            if event.key == pygame.K_m:
                maze_mode = not maze_mode
                new_game(); food = random_empty_cell(set(snake), obstacles, GRID)

    if not paused and not game_over and move_timer >= move_interval_ms:
        move_timer = 0
        head = snake[0]
        snake_set = set(snake)

        obstacles_for_path = set(obstacles).union(set(snake[:-1]))

        path = astar(head, food, obstacles_for_path, GRID)

        if path and len(path) > 0:
            next_cell = path[0]
        else:
            moves = safe_moves(head, snake_set, GRID)
            if moves:
                next_cell = moves[0]
            else:
                game_over = True
                next_cell = None

        if not game_over and next_cell:
            snake.insert(0, next_cell)
            if next_cell == food:
                score += 10
                food = random_empty_cell(set(snake), obstacles, GRID)
            else:
                snake.pop()
            if snake[0] in snake[1:]:
                game_over = True

    # --- Rendering ---
    if night_mode:
        draw_gradient(screen, BG_NIGHT_TOP, BG_NIGHT_BOTTOM)
    else:
        draw_gradient(screen, BG_LIGHT_TOP, BG_LIGHT_BOTTOM)

    draw_walls(obstacles)

    if path and not game_over:
        for idx, cell in enumerate(path):
            px,py = grid_to_pixel(cell)
            surf = pygame.Surface((BLOCK, BLOCK), pygame.SRCALPHA)
            alpha = max(10, 110 - idx*8)
            surf.fill((PATH_COLOR[0], PATH_COLOR[1], PATH_COLOR[2], alpha))
            screen.blit(surf, (px, py))

    if food:
        draw_food(food)

    draw_snake(snake)

    txt1 = font.render(f"Score: {score}   Length: {len(snake)}   GRID: {GRID}x{GRID}", True, WHITE)
    screen.blit(txt1, (12, 8))
    txt2 = small_font.render("SPACE:Pause  R:Restart  F:Fullscreen  N:Night  M:Maze  ESC:Quit", True, WHITE)
    screen.blit(txt2, (12, HEIGHT - 28))

    if paused:
        overlay = pygame.Surface((WIDTH, HEIGHT), pygame.SRCALPHA)
        overlay.fill((0,0,0,100))
        screen.blit(overlay, (0,0))
        ptext = big_font.render("PAUSED", True, WHITE)
        screen.blit(ptext, (WIDTH//2 - ptext.get_width()//2, HEIGHT//2 - 40))

    if game_over:
        overlay = pygame.Surface((WIDTH, HEIGHT), pygame.SRCALPHA)
        overlay.fill((0,0,0,150))
        screen.blit(overlay, (0,0))
        over_text = big_font.render("GAME OVER", True, (255,80,80))
        sub = font.render("Press R to Restart or ESC to Quit", True, WHITE)
        screen.blit(over_text, (WIDTH//2 - over_text.get_width()//2, HEIGHT//2 - 60))
        screen.blit(sub, (WIDTH//2 - sub.get_width()//2, HEIGHT//2 + 8))

    pygame.display.flip()
