def dfs(maze, start):
    visited = set()
    stack = [start]

    while stack:
        node = stack.pop()
        if node not in visited:
            print(node, end=" ")
            visited.add(node)
            # Add neighbors in reverse for correct order
            for neighbor in reversed(maze[node]):
                stack.append(neighbor)
        if node == 'Exit':
            print(" -> Exit Found")
        else:
            print(" -> No Exit Found")

maze = {
    'Entrance': ['A', 'B'],
    'A': ['C'],
    'B': ['D', 'E'],
    'C': ['Exit'],
    'D': [],
    'E': ['Exit'],
    'Exit': []
}

dfs(maze, 'A')