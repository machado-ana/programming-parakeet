#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(void) {
    int n;
    vector<int> queue;

    // Insercao
    cin >> n;
    for (int i=0; i<n; i++) {
        int id;
        cin >> id;
        queue.push_back(id);
    }

    // Set de removidos
    int m;
    set<int> skip;
    cin >> m;
    while (m--) {
        int id;
        cin >> id;
        skip.insert(id);
    }

    // Percorrendo o vector
    for (int i=0; i<n; i++) {
        if (skip.find(queue[i]) == skip.end())
            cout << queue[i] << " ";
    }
    cout << endl;

    return 0;
}
