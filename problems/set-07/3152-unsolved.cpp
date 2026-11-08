#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll *a, ll *b) {
  ll area = abs((a[0]*(b[1]-b[2]) - b[0]*(a[1]-a[2]) + a[1]*b[2] - b[1]*a[2]));
  area += abs((a[0]*(b[3]-b[2]) - b[0]*(a[3]-a[2]) + a[3]*b[2] - b[3]*a[2]));
  return area;
}

int main(void) {
  ll area[2];
  ll x[4], y[4];

  for (int i=0; i<2; i++) {
    for (int j=0; j<4; j++) {
      cin >> x[j] >> y[j];
    }
    area[i] = calc(x, y);
  }

  if (area[0] <= area[1]) cout << "terreno B\n";
  else cout << "terreno A\n";

  return 0;
}

