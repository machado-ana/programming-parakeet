#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, d;

    cin >> n >> d;
    while (n || d) {
        int mat[d][n];
        for (int i=0; i<d; i++)
            for (int j=0; j<n; j++)
                cin >> mat[i][j];

        bool all_dinners = false;
        for (int i=0; i<n; i++) {
            all_dinners = true;
            for (int j=0; j<d; j++) {
                if (mat[j][i] == 0) {
                    all_dinners = false;
                    break;
                }
            }
            if (all_dinners) break;
        }

        if (all_dinners) cout << "yes\n";
        else cout << "no\n";

        cin >> n >> d;
    }
    return 0;
}
