#include <bits/stdc++.h>
#define SZ 10005
using namespace std;

int main(void) {
  int m, n;
  vector<int> appeared(SZ);

  cin >> n >> m;
  while (n || m) {
    vector<int> used;
    int p, great = 0;

    for (int i=0; i<n*m; i++) {
      cin >> p;
      appeared[p]++;
      if (appeared[p]==1) used.push_back(p);
      if (appeared[p]>great)
        great = appeared[p];
    }

    int second_great = 0;
    for (int id : used) {
      if (appeared[id]<great && appeared[id]>second_great)
        second_great = appeared[id];
    }
    sort(used.begin(), used.end());

    for (int id : used) {
      if (appeared[id] == second_great)
        cout << id << " ";
      appeared[id] = 0;
    }
    cout << endl;

    cin >> n >> m;
  }
  return 0;
}
