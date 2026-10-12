#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    vector<int> cells(n);

    for (int i=0; i<n-1; i++)
        cin >> cells[i];

    int cur = 0;
    do {
        cur = cur + cells[cur];
        if (t == cur+1) {
            puts("YES");
            return 0;
        }
    } while (cur < n-1);
    puts("NO");
    return 0;
}
