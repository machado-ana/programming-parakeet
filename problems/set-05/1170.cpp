#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;

    cin >> t;
    while (t--) {
        float c;
        int dias = 0;

        cin >> c;
        if (c == 1) dias++;
        while (c > 1) {
            c /= 2;
            dias++;
        }
        cout << dias << " dias" << endl;
    }

    return 0;
}
