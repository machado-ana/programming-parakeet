#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int func(int m, int n) {
    if (m==0) return n+1;
    if (m>0 && n==0) return func(m-1, 1);
    return func(m-1, func(m, n-1));
}

int main(void) {
    int n;
    cin >> n;

    while (n) {
        vector<int> pontos(n, 0);

        for (int i=0; i<n; i++) {
            string s;
            int p1 = 0, p2 = 0;

            cin >> s;
            for (int j=0; j<s.size(); j++)
                p1 += (s[j]-'a')%10;

            cin >> s;
            for (int j=0; j<s.size(); j++)
                p2 += (s[j]-'a')%10;

            pontos[i] = func(p1%4, p2%4);
        }

        int maior = *max_element(pontos.begin(), pontos.end());

        bool first = true;
        cout << "VENCEDOR:";
        for (int i=0; i<n; i++) {
            if (pontos[i] == maior) {
                if (!first) cout << " -";
                cout << " " << i+1;
                first = false;
            }
        }

        cout << "\n";

        cin >> n;
    }

    return 0;
}
