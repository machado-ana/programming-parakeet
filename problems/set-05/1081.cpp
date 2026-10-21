#include <bits/stdc++.h>
using namespace std;
int graph[20][20];
bool visited[20];
int v, e;

bool dfs(int u, int depth) {
    visited[u] = true;
    bool explored = false;

    for (int j=0; j<v; j++) {
        if (graph[u][j]) {
            explored = true;

            // Espacos
            for (int i=0; i<depth; i++)
                cout << "  ";

            cout << u << "-" << j;

            if (!visited[j]) {
                cout << " pathR(G," << j << ")\n";
                dfs(j, depth+1);
            } else {
                cout << "\n";
            }
        }
    }
    return explored;
}

int main(void) {
    int n;

    cin >> n;
    for (int i=0; i<n; i++) {
        // Resetando
        for (int j=0; j<20; j++) {
            visited[j] = false;
            for (int k=0; k<20; k++)
                graph[j][k] = 0;
        }

        // Criando o grafo
        cin >> v >> e;
        for (int j=0; j<e; j++) {
            int a, b;
            cin >> a >> b;
            graph[a][b] = 1;
        }

        cout << "Caso " << i+1 << ":\n";

        for (int j=0; j<v; j++) {
            if (!visited[j]) {
                if (dfs(j, 1)) cout << "\n";
            }
        }
    }
    return 0;
}
