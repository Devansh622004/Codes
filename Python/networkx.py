import networkx as nx
import matplotlib.pyplot as plt

# Create a graph
G = nx.Graph()

# Add nodes
G.add_nodes_from([1, 2, 3])

# Add edges
G.add_edge(1, 2)
G.add_edge(2, 3)

# Draw graph
nx.draw(G, with_labels=True, node_color='lightblue', font_weight='bold')
plt.show()