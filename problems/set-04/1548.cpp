#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    int nota, troca;
    vector<int> notas;
    vector<int> ordenado;

    cin >> n;
    while (n--) {
        cin >> m;
        while (m--) {
            cin >> nota;
            notas.push_back(nota);
            ordenado.push_back(nota);
        }
        sort(ordenado.rbegin(), ordenado.rend());
        troca = 0;
        for (int i=0; i<notas.size(); i++) {
            if (ordenado[i]!=notas[i]) troca++;
        }
        cout << (notas.size()-troca) << endl;
        notas.clear();
        ordenado.clear();
    }
    return 0;
}
