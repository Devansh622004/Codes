from collections import deque

def bfs(graph, start):
    visited = set()          # To store visited nodes
    queue = deque([start])   # Create queue for BFS
    visited.add(start)

    while queue:
        node = queue.popleft()
        print(node, end=" ")   # Process/visit node

        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)

graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

bfs(graph, 'A')
