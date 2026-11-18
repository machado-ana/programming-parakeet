#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<int, int>> postes(n);
  for (int i=0; i<n; i++)
    cin >> postes[i].first >> postes[i].second;

  ll total = n-1;
  sort(postes.begin(), postes.end());
  for (int a=0; a<n; a++) {
    int min_y = 1e9;
    for (int b=a+1; b<n; b++) {
      min_y = min(postes[b].second, min_y);
    }
    if (min_y < postes[a+1].second && min_y > postes[a].second) total--;
  }
  cout << total << endl;

  return 0;
}
