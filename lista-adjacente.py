def addv(v): # Função para adicionar um vértice ao grafo
    if v not in graph:
        graph[v] = []

def add_edge(v1, v2): # Função para adicionar uma aresta ao grafo (grafo não direcionado)
    if v1 in graph and v2 in graph:
        graph[v1].append(v2)
        graph[v2].append(v1)

def print_graph(): # Função para imprimir a lista de adjacências
    for v in graph:
        print(f"{v}: {', '.join(map(str, graph[v]))}")

graph = {} # Criando um grafo representado por uma lista de adjacências

while True: # Interação com o usuário
    print("\n1. Add vertex.")
    print("2. Add edges.")
    print("3. Print graph")
    print("4. Close.")

    choice = input("Choose an action: ")

    if choice == '1':
        v = input("Type a vertex to be added: ")
        addv(v)

    elif choice == '2':
        v1 = input("Type a first vertex of the edge: ")
        v2 = input("Type a second vertex of the edge: ")
        add_edge(v1, v2)

    elif choice == '3':
        print_graph()

    elif choice == '4':
        break
    else:
        print("Invalid option. Please, choose a valid option.")

print("Program closed.")