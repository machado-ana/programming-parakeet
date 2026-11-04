#include <bits/stdc++.h>
using namespace std;

double findVolume(int &b1, int &b2, int &h2, double &h) {
  double r = b1 + (double)(b2-b1)/h2 * h;
  double vol = (double)(h)* acos(-1)/3 * (b1*b1 + b1*r + r*r);
  return vol;
}

int main(void) {
  int c;

  cin >> c;
  while (c--) {
    int n, b1, b2, h2;
    double l;

    cin >> n >> l;
    cin >> b1 >> b2 >> h2;
    l /= n;

    double right = h2;
    double left = 0;
    double mid;
    for (int it=0; it<100; it++) {
      mid = (right+left)/2;
      if (findVolume(b1, b2, h2, mid)<l)
        left = mid;
      else
        right = mid;
    }

    cout << fixed << setprecision(2)
      << mid << "\n";
  }

  return 0;
}
