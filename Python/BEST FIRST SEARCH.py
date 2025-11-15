from queue import PriorityQueue

def best_first_search(graph, h, start, goal):
    pq = PriorityQueue()
    pq.put((h[start], start))
    visited = set()

    while not pq.empty():
        _, node = pq.get()
        print(node, end=" ")

        if node == goal:
            return

        visited.add(node)
        for neigh in graph[node]:
            if neigh not in visited:
                pq.put((h[neigh], neigh))

# Graph
graph = {
    'A':['B','C'],
    'B':['D','E'],
    'C':['F'],
    'D':[], 'E':[], 'F':[]
}

# Heuristic values
h = {'A':5,'B':3,'C':4,'D':0,'E':0,'F':0}

best_first_search(graph, h, 'A', 'D')
