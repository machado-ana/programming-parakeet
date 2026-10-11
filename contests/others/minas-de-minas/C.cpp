#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll &mid, ll& n_capivaras, ll& paes, vector<ll>& tempo_capivara) {
    ll paes_comidos = 0;
    for (ll i=0; i<n_capivaras; i++) {
        paes_comidos += mid/tempo_capivara[i];
        if (paes_comidos >= paes) return true;
    }
    return false;
}

int main(void) {
     ll n_capivaras;
     ll paes;

     cin >> n_capivaras;
     cin >> paes;
     vector<ll> tempo_capivara(n_capivaras);

     for (ll i=0; i<n_capivaras; i++) {
         cin >> tempo_capivara[i];
     }

     ll ans;
     ll r = 1e18 + 10ll;
     ll l = 0;
     while (l <= r) {
         ll mid = (l+r)/2;
         if (solve(mid, n_capivaras, paes, tempo_capivara)) {
            ans = mid;
            r = mid - 1;
         } else {
            l = mid + 1;
         }
     }

     cout << ans << endl;

    return 0;
}
