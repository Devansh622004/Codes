import pygame, random, sys

# Initialize pygame
pygame.init()

# Screen settings
WIDTH, HEIGHT = 600, 400
win = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("🚀 Spaceship vs Obstacles 🚀")

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)

# Spaceship
ship_width, ship_height = 40, 20
ship_x = WIDTH // 2
ship_y = HEIGHT - 50
ship_speed = 5

# Obstacles
obstacle_width = 40
obstacle_height = 20
obstacles = []
obstacle_speed = 5

clock = pygame.time.Clock()
font = pygame.font.SysFont(None, 36)


def draw(ship_x, obstacles, score):
    win.fill(BLACK)
    # Draw spaceship
    pygame.draw.rect(win, WHITE, (ship_x, ship_y, ship_width, ship_height))
    # Draw obstacles
    for ox, oy in obstacles:
        pygame.draw.rect(win, RED, (ox, oy, obstacle_width, obstacle_height))
    # Draw score
    text = font.render(f"Score: {score}", True, WHITE)
    win.blit(text, (10, 10))
    pygame.display.update()


def main():
    global ship_x
    score = 0
    obstacles = []
    run = True

    while run:
        clock.tick(30)  # FPS

        # Event handling
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
                pygame.quit()
                sys.exit()

        # Key presses
        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT] and ship_x > 0:
            ship_x -= ship_speed
        if keys[pygame.K_RIGHT] and ship_x < WIDTH - ship_width:
            ship_x += ship_speed

        # Add obstacles
        if random.randint(1, 25) == 1:  # spawn randomly
            obstacles.append([random.randint(0, WIDTH - obstacle_width), 0])

        # Move obstacles
        for i in range(len(obstacles)):
            obstacles[i][1] += obstacle_speed

        # Check collisions
        for ox, oy in obstacles:
            if (ship_x < ox + obstacle_width and ship_x + ship_width > ox and
                    ship_y < oy + obstacle_height and ship_y + ship_height > oy):
                print("💥 GAME OVER! Final Score:", score)
                run = False

        # Remove off-screen obstacles & update score
        obstacles = [obs for obs in obstacles if obs[1] < HEIGHT]
        score += 1

        # Draw everything
        draw(ship_x, obstacles, score)


main()
