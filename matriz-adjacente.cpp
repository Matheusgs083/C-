#include <iostream>
using namespace std;

int** createm(int quantv){
    int** graph;
    graph = new int*[quantv];
    
    for(int q = 0; q < quantv; q++){   // CRIA O GRAFO DINAMICAMENTE, DPS PREENCHE TODOS OS ELEMENTOS COM 0;
        graph[q] = new int[quantv];
    }

    for(int i = 0; i < quantv; i++){
        for(int f = 0; f < quantv; f++){
            graph[i][f] = 0;
        }
    }

    return graph;
}

void readgraph(int**& graph, int typeofgraph){
    int initialv, finalv, quantya;

    int count = 1;
    while(count == 1){
        
        cout << ("Type a initial verticie: ");  // FAZ A LEITURA JUNTO COM O USUARIO E PREENCHE O GRAFO
        cin >> initialv;

        cout << ("Type a final verticie: ");
        cin >> finalv;

        cout << ("Type edges numbers: ");
        cin >> quantya;

        if(initialv < 0 || finalv < 0 || quantya < 0){
            count = 0;
        }
        else{
            graph[initialv][finalv] = quantya;

            if(typeofgraph == 0){
                graph[finalv][initialv] = quantya;
            }
        }
    }
}

void printg(int** graph, int quantv){
    
    for(int i = 0; i < quantv; i++){   // IMPRIME O GRAFO
        for(int f = 0; f < quantv; f++){
            cout << "[ " << graph[i][f] << " ] ";
        }
        cout << endl;
    }
}

int main() {
    int quantv, typeofgraph;

    cout << "Type a kind of graph, directed or not. Directed = 1 || Not directed = 0: ";
    cin >> typeofgraph;

    cout << "How many vertex does the graph have? ";
    cin >> quantv;

    int** graph = createm(quantv);

    readgraph(graph, typeofgraph);

    printg(graph, quantv);

    return 0;
}