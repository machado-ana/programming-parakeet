#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
    ll t;

    cin >> t;
    while (t--) {
        ll n, d;
        set<ll> dist;

        cin >> n;
        for (ll i=0; i<n; i++) {
            cin >> d;
            dist.insert(d);
        }

        ll saida = 2 * ((*dist.rbegin()) - (*dist.begin()));
        cout << saida << "\n";
    }

    return 0;
}
