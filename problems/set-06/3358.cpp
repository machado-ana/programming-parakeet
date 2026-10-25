#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;

    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        str[0] += 'a' - 'A';

        int cont = 0;
        for (int i=0; i<str.size(); i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u') {
                    cont = 0;
                    continue;
            }
            cont++;
            if (cont == 3)
                break;
        }

        str[0] += 'A' - 'a';
        if (cont==3)
            cout << str << " nao eh facil\n";
        else
            cout << str << " eh facil\n";
    }
    return 0;
}
