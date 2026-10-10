#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    vector<int> tops = {1, 3, 5, 10, 25, 50, 100};

    cin >> n;
    for (int i=0; i<tops.size(); i++) {
        if (n <= tops[i]) {
            cout << "Top " << tops[i] << endl;
            return 0;
        }
    }

    return 0;
}
