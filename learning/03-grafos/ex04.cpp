/* Ex. 04: Busca em Profundidade */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define V 8
#define YELLOW "\033[33m"
#define GREEN  "\033[32m"
#define RED    "\033[31m"
#define RESET  "\033[0m"

vector<int> adj[V];
vector<int> visited(V, false);

void printMenu(void) {
    puts("   === Ex. 04: Busca em Profundidade ===");

    puts(" > Infos gerais:");
    puts(
        "   - Realizando a DFS utilizando a estrutura\n"
        "   de stack (pilha).\n"
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

void dfsStack(int start) {
    stack<int> lista;
    lista.push(start);
    visited[start] = true;

    while (!lista.empty()) {
        int u = lista.top();
        lista.pop();
        printf(" > Percorrendo o vizinho de " YELLOW "no[%d]\n" RESET, u);
        for (int i=0; i<adj[u].size(); i++) {
            int v = adj[u][i];
            if (!visited[v]) {
                printf("   Visitando " GREEN "no[%d]" RESET "...\n", v);
                lista.push(v);
                visited[v] = true;
            } else {
                printf(RED "   [!] " RESET "No[%d] ja foi visitado.\n", v);
            }
        }

    }
}


int main(void) {
    initGraph();
    printMenu();

    puts(" > Grafo");
    printGraph();

    puts("\n > dfsStack(0)");
    dfsStack(0);

    return 0;
}
