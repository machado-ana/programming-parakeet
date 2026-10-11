/* Ex. 03: Busca em Profundidade */
#include <iostream>
#include <vector>
using namespace std;
#define V 8
#define YELLOW "\033[33m"
#define GREEN  "\033[32m"
#define RED    "\033[31m"
#define RESET  "\033[0m"

vector<int> adj[V];
vector<int> visited(V, false);
vector<int> ccNos(V);

void printMenu(void) {
    puts("   === Ex. 03: Busca em Profundidade ===");

    puts(" > Infos gerais:");
    puts(
        "   - A busca em profundidade parte um\n"
        "   no raiz e, a partir dele, avanca o\n"
        "   mais fundo possivel no grafo;\n"
        "   - Caso o grafo seja desconexo, devemos\n"
        "   percorrer todos os os seus componentes\n"
        "   convexos para uma busca completa.\n"
    );
}

void printGraph(void) {
    for (int i=0; i<V; i++) {
        printf("   Node[%d]: ", i);
        for (int elem : adj[i]) {
            cout << elem << " ";
        }
        puts("");
    }
}

void initGraph(void) {
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);

    adj[3].push_back(0);
    adj[3].push_back(2);
    adj[3].push_back(4);

    adj[4].push_back(2);
    adj[4].push_back(3);


    adj[5].push_back(2);

    adj[6].push_back(7);

    adj[7].push_back(6);
}

void dfs(int u, int cc) {
    visited[u] = true;
    ccNos[u] = cc;
    printf("   Visitando" GREEN " no[%d]" RESET "...\n", u);
    for (int i=0; i<adj[u].size(); i++) {
        int v = adj[u][i];
        if (!visited[v]) {
            printf(" > Percorrendo os vizinhos de" YELLOW " no[%d]" RESET ":\n", u);
            dfs(v, cc);
        } else {
            printf(RED "   [!] " RESET "No[%d] ja foi visitado.\n", v);
        }
    }
}

void dfsExplore(void) {
    int cc = 0;
    for (int i=0; i<V; i++) {
        if (!visited[i]) {
            dfs(i, cc);
            cc++;
        }
    }
}

void printCC(void) {
    printf("   ");
    for (int i=0; i<V; i++) {
        printf("%d:%d ", i, ccNos[i]);
    }
    puts("");
}

int main(void) {
    initGraph();
    printMenu();

    puts(" > Grafo");
    printGraph();

    puts("\n > dfsExplore()");
    dfsExplore();

    puts("\n > Componentes convexos:");
    printCC();
    return 0;
}
