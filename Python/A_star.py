from queue import PriorityQueue

def a_star(graph, cost, h, start, goal):
    pq = PriorityQueue()
    pq.put((h[start], start))
    g = {start: 0}

    while not pq.empty():
        _, node = pq.get()
        print(node, end=" ")

        if node == goal:
            return

        for neigh in graph[node]:
            new_g = g[node] + cost[node][neigh]
            if neigh not in g or new_g < g[neigh]:
                g[neigh] = new_g
                f = new_g + h[neigh]
                pq.put((f, neigh))

# Graph
graph = {
    'A':['B','C'],
    'B':['D','E'],
    'C':['F'],
    'D':[], 'E':[], 'F':[]
}

# Cost table
cost = {
    'A':{'B':1,'C':4},
    'B':{'D':2,'E':5},
    'C':{'F':3},
    'D':{}, 'E':{}, 'F':{}
}

h = {'A':5,'B':3,'C':4,'D':0,'E':0,'F':0}

a_star(graph, cost, h, 'A', 'D')
