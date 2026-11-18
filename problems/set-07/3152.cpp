#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// x0 y0 1
// x1 y1 1 3 
// x2 y2 1 2
// det = x0 * (y1-y2) - y[0]*(x1-x2) + x1*y2-x2*y1 

ll calc(ll *x, ll *y) {
  ll area = 0;
  area += x[0]*(y[1]-y[2]) - y[0]*(x[1]-x[2]) + x[1]*y[2]-x[2]*y[1];
  area += x[0]*(y[2]-y[3]) - y[0]*(x[2]-x[3]) + x[2]*y[3]-x[3]*y[2];
  return fabsl(area);
}

int main(void) {
  ll area[2];
  ll x[4], y[4];

  for (int i=0; i<2; i++) {
    for (int j=0; j<4; j++)
      cin >> x[j] >> y[j];
    area[i] = calc(x, y);
  }

  if (area[0] <= area[1]) cout << "terreno B\n";
  else cout << "terreno A\n";

  return 0;
}

