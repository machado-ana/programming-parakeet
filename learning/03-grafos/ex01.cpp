/* Ex. 01: Matriz de Adjacencia */
#include <iostream>
#include <cstring>
using namespace std;
#define V 4

void printMenu(void) {
    puts("   === Ex. 01: Matriz de Adjacencia ===");

    puts(" > Infos gerais:");
    puts(
        "   - Este eh um grafo unidirecionado;\n"
        "   - Digite dois vertices para conecta-los.\n"
    );
}

void printGrafo(int m[V][V]) {
    for (int i=0; i<V; i++) {
        printf("   ");
        for (int j=0; j<V; j++)
            printf("%d ", m[i][j]);
        puts("");
    }
}

int main(void) {
    int mat_adj[V][V];

    // Inicializacao
    memset(mat_adj, 0, sizeof mat_adj);

    printMenu();
    puts(" > Estado atual:");
    printGrafo(mat_adj);
    puts("");

    int n;
    printf(" > Quantas conexoes deseja fazer? ");
    cin >> n;
    while (n--) {
        int a, b;
        printf("   Conexao: ");
        cin >> a >> b;
        if (a>=V || b>=V) {
            puts(" > [!] Valor invalido. ");
            n++;
            continue;
        }
        mat_adj[a][b] = 1;
        mat_adj[b][a] = 1;
    }

    puts("\n > Estado final:");
    printGrafo(mat_adj);

    return 0;
}
