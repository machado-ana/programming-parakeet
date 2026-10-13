#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;

    cin >> n;
    vector<int> queue(n);
    for (int i=0; i<n; i++) {
        cin >> queue[i];
    }

    cin >> m;
    set<int> left;
    for (int i=0; i<m; i++) {
        int l;
        cin >> l;
        left.insert(l);
    }

    bool first = true;
    for (int i=0; i<n; i++) {
        if (left.find(queue[i]) == left.end()) {
            if (!first) cout << " ";
            cout << queue[i];
            first = 0;
        }
    }
    cout << "\n";

    return 0;
}
