/* Ex. 06: Algoritmo de Dijkstra */
#include <iostream>

#define SZ 5
#define INF (int)1e9
using namespace std;

int previous[SZ];
int cost[SZ];
bool closed[SZ];
int graph[SZ][SZ] = {
    {0, 1, 0, 3, 10},
    {0, 0, 5, 0, 0},
    {0, 0, 0, 0, 1},
    {0, 0, 2, 0, 6},
    {0, 0, 0, 0, 0}
};

void printMenu(void) {
    cout << "   === Ex. 06: Algoritmo de Dijkstra ===\n";
    cout << " > Infos gerais:\n";
    cout << "   - O grafo percorrido possui formato de;\n"
         << "   matriz de adjacencia.\n";
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
    // Inicializacao
    for (int i=0; i<SZ; i++) {
        closed[i] = false;
        cost[i] = INF;
        previous[i] = -1;
    }
    cost[source] = 0;


    while (true) {
        // Encontrando o vcm
        int vcm = -1;
        for (int i=0; i<SZ; i++)
            if (!closed[i] && (vcm==-1 || cost[i]<cost[vcm]))
                vcm = i;
        if (vcm<0) break;
        closed[vcm] = true;

        // Percorrendo os vizinhos do vcm
        for (int i=0; i<SZ; i++) {
            int new_path = cost[vcm] + graph[vcm][i];
            if (graph[vcm][i]!=0 && new_path<cost[i]) {
                cost[i] = new_path;
                previous[i] = vcm;
            }
        }
    }
}

void printCost(void) {
    for (int i=0; i<SZ; i++)
        cout << cost[i] << " ";
    cout << "\n";
}

void printPrevious(void) {
    for (int i=0; i<SZ; i++)
        cout << previous[i] << " ";
    cout << "\n";
}


int main(void) {
    printMenu();

    cout << " > Grafo:\n";
    printGraph();

    dijkstra(0);
    cout << "\n > dijkstra(0)\n";
    cout << "   Custo:     ";
    printCost();
    cout << "   Anterior: ";
    printPrevious();

    return 0;
}
