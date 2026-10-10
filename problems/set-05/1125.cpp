#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int g, p;

    cin >> g >> p;
    while (g || p) {
        vector<vector<int>> posicao_pilotos(g);
        // Inserindo a posicao dos pilotos numa matriz
        for (int i=0; i<g; i++) {
            for (int j=0; j<p; j++) {
                int pos;
                cin >> pos;
                posicao_pilotos[i].push_back(pos);
            }
        }

        int n_sistemas, sz, pont;
        cin >> n_sistemas;
        vector<vector<int>> sistemas(n_sistemas);
        for (int i=0; i<n_sistemas; i++) {
            cin >> sz;
            // Pontuacao por posicao para cada sistema
            for (int j=0; j<sz; j++) {
                cin >> pont;
                sistemas[i].push_back(pont);
            }
        }

        // Calcula a pontuacao para cada sistema
        for (int i=0; i<n_sistemas; i++) {
            vector<int> resultado(p, 0);
            // Calculando a pontuacao de cada piloto
            for (int j=0; j<g; j++) {
                for (int k=0; k<p; k++) {
                    int pos = posicao_pilotos[j][k];
                    if (pos<=sistemas[i].size()) resultado[k] += sistemas[i][pos-1];
                }
            }
            // Maior pontuacao
            int maior = *(max_element(resultado.begin(), resultado.end()));
            bool prim = true;
            for (int i=0; i<p; i++) {
                if (resultado[i] == maior) {
                    if (!prim) cout << " ";
                    cout << i+1;
                    prim = false;
                }
            }
            puts("");
        }
        cin >> g >> p;
    }
    return 0;
}
