#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n;
    bool primo;

    cin >> t;
    while (t--) {
        cin >> n;
        primo = true;
        for (int i=2; i*i<=n; i++) {
            if (n%i == 0) {
                primo = false;
                break;
            }
        }
        if (primo) printf("%d eh primo\n", n);
        else printf("%d nao eh primo\n", n);
    }
    return 0;
}
