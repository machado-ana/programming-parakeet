#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int b, z;
    int n, m;

    cin >> b >> z;
    while (b || z) {
        cin >> n >> m;
        vector<int> beto;
        vector<int> zeca;
        int e;

        for (int i=0; i<b; i++) {
            cin >> e;
            beto.push_back(e);
        }
        for (int i=0; i<z; i++) {
            cin >> e;
            zeca.push_back(e);
        }

        sort(zeca.rbegin(), zeca.rend());
        sort(beto.begin(), beto.end());

        int maior_beto = *(beto.begin()+n-1);
        int menor_zeca = *(zeca.begin()+m-1);

        if ((maior_beto)<(menor_zeca))
            cout << "YES\n";
        else
            cout << "NO\n";

        cin >> b >> z;
    }

    return 0;
}
