#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    int arv, dias, maior;
    vector<int> arvores;
    cin >> n;
    while (n--) {
        scanf("%d", &arv);
        arvores.push_back(arv);
    }
    sort(arvores.rbegin(), arvores.rend());
    dias = 2;
    maior = 0;
    for (int i=0; i<arvores.size(); i++) {
        if (arvores[i]+i>maior) maior = arvores[i]+i;
    }
    dias += maior;
    cout << dias << endl;
    arvores.clear();
    return 0;
}
