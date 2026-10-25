#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    set<string> pomekons;

    cin >> t;
    string str;
    while (t--) {
        cin >> str;
        pomekons.insert(str);
    }

    cout << "Falta(m) " << 151-pomekons.size() << " pomekon(s).\n";

    return 0;
}
