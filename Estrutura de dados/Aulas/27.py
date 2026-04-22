import networkx as nx
import matplotlib.pyplot as plt

#Criar um Grafo simples
G = nx.Graph()

#Adicionar vértice / nós ()
G.add_nodes_from(["Joao", "Paulo", "Maria", "Joana", "Antonia", "Lili", "Raimundo"])

G.add_edges_from([("Joao", "Paulo"),
                ("Paulo", "Maria"),
                ("Paulo", "Joana"),
                ("Paulo", "Antonia"),
                ("Raimundo", "LiLi"),
                ("Antonia", "Maria"),
                ("Antonia", "Lili"),])

#Imprimir o Grafo
print(f"Nós do Grafo: {G.nodes()}")
print(f"Arestas do Grafo: {G.edges()}")
print(f"Contando o num de Nós: {G.number_of_nodes()}")
print(f"Contando o num de Arestas: {G.number_of_edges()}")

pos = nx.spring_layout(G, seed=42)

nx.draw(G, pos, with_labels= True, node_color="lightblue",
                          font_weight="bold", node_size=700, font_size=10)


plt.title("Representação em Grafo simples")
plt.show()