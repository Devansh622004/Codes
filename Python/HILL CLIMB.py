def hill_climb(h, start):
    current = start
    while True:
        neighbours = h[current]
        best = min(neighbours, key=neighbours.get)

        print("Current:", current, "-> Best neighbour:", best)

        if neighbours[best] >= neighbours[current]:
            break   # No better move

        current = best

# Example heuristic table
h = {
    'A': {'B':3, 'C':5},
    'B': {'D':1, 'E':4},
    'C': {'F':2},
    'D':{'D':1}, 'E':{'E':4}, 'F':{'F':2}
}

hill_climb(h, 'A')
