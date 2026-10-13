#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;
    while (h1 || m1 || h2 || m2) {
        int ini, fim, total=0;
        ini = h1*60 + m1;
        fim = h2*60 + m2;

        total += fim-ini;
        if (ini > fim)
            total += 60*24;
        cout << total << endl;

        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}
