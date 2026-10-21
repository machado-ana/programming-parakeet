#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int t;

    cin >> t;
    for (int j=0; j<t; j++) {
        int k, a, b;

        cin >> a >> b;
        cin >> k;

        // Armazenando as consultas
        vector<pair<int, int>> consultas(k);
        // Guardando o maior ponto pra calcula a espiral até ele
        int max_point = 0;
        for (int i=0; i<k; i++) {
            cin >> consultas[i].first >> consultas[i].second;
            max_point = max({max_point, consultas[i].first, consultas[i].second});
        }

        // Construindo o mapa
        vector<bool> sinal_fronteira(max_point+1);
        ll y = 0, x = 0;
        int dx[] = {-1, 0, 1, 0};   // Dist em X a cada mudanca de direcao
        int dy[] = {0, 1, 0, -1};   // Dist em Y a cada mudanca de direcao
        int dir = 0;                // Qual direcao ele vai andar (ex: 0 -> dx[0]=-1 (esquerda) e dy[0]=0 (nao mexe))
        int passos = 0;
        int lim_passos = 1;     // Passos de cada espiral
        int mudancas_dir = 0;   // A cada 2 mudancas de direcao, a espiral aumenta
        int catalogados = 0;    // Os pontos da espiral que caem na funcao sao pulados

        while (catalogados <= max_point) {
            // Se der 0, o ponto cai exatamente em cima da funcao
            // Se der positivo, ele ta acima
            // Se der negativo, ele ta embaixo
            ll eq = y - a*x - b;

            // Se ele nao cai na funcao, adiciona como ponto cataloagdo
            if (eq != 0) {
                sinal_fronteira[catalogados] = (eq > 0);
                catalogados++;
            }

            x += dx[dir];
            y += dy[dir];
            passos++;

            if (passos == lim_passos) {
                passos = 0;
                dir = (dir+1)%4;
                mudancas_dir++;

                // A cada duas "viradas", a espiral aumenta
                if (mudancas_dir%2 == 0) {
                    lim_passos++;
                }
            }
        }

        // Analisando os pontos de conuslta
        cout << "Caso " << j+1 << "\n";
        for (int i=0; i<k; i++) {
            int p1 = consultas[i].first;
            int p2 = consultas[i].second;
            if (sinal_fronteira[p1]==sinal_fronteira[p2])
                cout << "MESMO LADO\n";
            else
                cout << "LADOS OPOSTOS\n";
        }

    }

    return 0;
}
