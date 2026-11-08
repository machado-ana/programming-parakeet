#include <bits/stdc++.h>
using namespace std;
typedef double dd;

dd solve(int b1, int b2, dd new_h, int h2) {
  dd new_v;
  dd new_b = b1 + (dd)(b2-b1)/h2 * new_h;

  new_v = (dd) new_h * acos(-1)/3 * (b1*b1 + b1*new_b + new_b*new_b);

  return new_v;
}

int main(void) {
  int c, n, b1, b2, h2;
  dd l;

  cin >> c;
  while (c--) {
    cin >> n >> l;
    cin >> b1 >> b2 >> h2;
    l /= n;

    dd mid;
    dd right = h2;
    dd left = 0;
    for (int it=0; it<100; it++) {
      mid = (right+left)/2;
      if (solve(b1, b2, mid, h2) < l)
        left = mid;
      else
        right = mid;
    }

    cout << fixed << setprecision(2) 
      << mid << "\n";
  }

  return 0;
}

