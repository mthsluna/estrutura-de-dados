import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph ()

G.add_nodes_from(["Audrey", "Jeff", "Bill", "Lana", "Cathy", "Harry", "Gayle", "Emily", "Dave", "Frank",])

G.add_edges_from([("Audrey", "Bill"),
                 ("Audrey", "Lana"),
                 ("Lana", "Harry"),
                 ("Harry", "Jeff"),
                 ("Jeff", "Bill"),
                 ("Jeff", "Emily"),
                 ("Bill", "Emily"),
                 ("Bill", "Gayle"),
                 ("Gayle", "Audrey"),
                 ("Gayle", "Cathy"),
                 ("Cathy", "Emily"),
                 ("Emily", "Frank"),
                 ("Emily", "Dave"),
                 ("Frank", "Dave"),])

print(f"Nós do Grafo: {G.nodes()}")
print(f"Arestas do Grafo: {G.edges()}")
print(f"Contando o num de Nós: {G.number_of_nodes()}")
print(f"Contando o num de Arestas: {G.number_of_edges()}")

pos = nx.spring_layout(G, seed=105)

nx.draw(G, pos, with_labels= True, node_color="lightgreen",
                          font_weight="bold", node_size=1700, font_size=10)


plt.title("Atividade 1")
plt.show()