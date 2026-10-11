/* Ex. 02: Lista de Adjacencias */
#include <iostream>
#include <vector>
using namespace std;
#define V 4

void printMenu(void) {
    puts("   === Ex. 02: Lista de Adjacencias ===");

    puts(" > Infos gerais:");
    puts(
        "   - Entre com os vizinhos de cada vertice\n"
        "   para a construcao do grafo;\n"
        "   - Para pular, entre com '-1'.\n"
    );
}

void printGrafo(vector<int>* v) {
    for (int i=0; i<V; i++) {
        printf("   No [%d]: ", i);
        for (int elem : v[i]) {
            cout << elem << " ";
        }
        puts("");
    }
}

int main(void) {
    vector<int> adj[V];

    printMenu();
    puts(" > Estado atual:");
    printGrafo(adj);
    puts("");

    int vizi;
    puts(" > Preencha o grafo ");
    for (int i=0; i<V; i++) {
        printf("   Vertice %d: ", i);
        for (int j=0; j<V; j++) {
            cin >> vizi;
            if (vizi<0) break;
            if (vizi>=V) {
                puts(" > [!] Vertice invalido.");
                j--;
                printf("   Vertice %d: ", i);
                continue;
            }
            adj[i].push_back(vizi);
        }
    }

    puts("\n > Estado final:");
    printGrafo(adj);

    return 0;
}
