#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int b, n;
  int d, c, v;
  int r;
  vector<int> reservas;
  bool liquidar;

  scanf("%d %d", &b, &n);
  while (b || n) {
    reservas.clear();
    liquidar = true;
    for (int i=0; i<b; i++) {
      scanf("%d", &r);
      reservas.push_back(r);
    }
    for (int i=0; i<n; i++) {
      scanf("%d %d %d", &d, &c, &v);
      reservas[c-1] += v;
      reservas[d-1] -= v;
    }
    for (int i=0; i<b; i++) {
      if (reservas[i] < 0)
        liquidar = false;
    }
    if (liquidar)
      puts("S");
    else
      puts("N");
    scanf("%d %d", &b, &n);
  }
  return 0;
}
