/* Ex. 07: Algoritmo de Dijkstra */
#include <iostream>

#define SZ 5
#define INF (int)1e9
using namespace std;

// fazer

void printMenu(void) {
    cout << "   === Ex. 07: Algoritmo de Dijkstra ===\n";
    cout << " > Infos gerais:\n";
    cout << "   - O grafo percorrido possui o formato de\n"
         << "   vector<pair<int, int>>;\n"
         << "   - O algoritmo usa a estrutura heap para\n"
         << "   guardar os custos de cada caminho.\n";
}

void printGraph(void) {
    for (int i=0; i<SZ; i++) {
        cout << "   ";
        for (int j=0; j<SZ; j++)
            cout << graph[i][j] << "  ";
        cout << endl;
    }
}

void dijkstra(int source) {
    // fazer
}


int main(void) {
    printMenu();

    cout << " > Grafo:\n";
    printGraph();

    dijkstra(0);

    return 0;
}
