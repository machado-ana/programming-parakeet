#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    set<string> joias;

    while (cin >> str) {
        joias.insert(str);
    }

    cout << joias.size() << endl;

    return 0;
}
