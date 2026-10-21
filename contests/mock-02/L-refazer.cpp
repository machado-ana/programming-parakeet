#include <bits/stdc++.h>
using namespace std;

struct Ponto {
    int lin;
    int col;
    int dist;
};

int main(void) {
    int M, N;

    while (cin >> M >> N && (M != 0 || N != 0)) {
        vector<string> caverna(M);
        queue<Ponto> fila;

        for (int i = 0; i < M; i++) {
            cin >> caverna[i];
            for (int j = 0; j < N; j++) {
                if (caverna[i][j] == 'P') {
                    fila.push({i, j, 0});
                    caverna[i][j] = 'G';
                }
            }
        }

        int move_l[] = {-1, 1, 0, 0};
        int move_c[] = {0, 0, -1, 1};

        int resposta = -1;

        while (!fila.empty()) {
            Ponto atual = fila.front();
            fila.pop();

            for (int i = 0; i < 4; i++) {
                int vizinho_l = atual.lin + move_l[i];
                int vizinho_c = atual.col + move_c[i];

                if (vizinho_l >= 0 && vizinho_l < M && vizinho_c >= 0 && vizinho_c < N) {

                    if (caverna[vizinho_l][vizinho_c] == 'S') {
                        resposta = atual.dist + 1;
                        break;
                    }

                    if (caverna[vizinho_l][vizinho_c] == 'E') {
                        caverna[vizinho_l][vizinho_c] = 'G';
                        fila.push({vizinho_l, vizinho_c, atual.dist + 1});
                    }
                }
            }

            if (resposta != -1) {
                break;
            }
        }

        cout << resposta << "\n";
    }

    return 0;
}
