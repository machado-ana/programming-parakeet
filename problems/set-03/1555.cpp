#include <bits/stdc++.h>
using namespace std;

int rFunc(int x, int y) {
  return 9*x*x + y*y;
}

int bFunc(int x, int y) {
  return 2*x*x + 25*y*y;
}

int cFunc(int x, int y) {
  return (-100)*x + y*y*y;
}

int main(void) {
  int n, x, y;
  int r, b, c;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    r = rFunc(x, y);
    b = bFunc(x, y);
    c = cFunc(x, y);
    if (r>=b && r>=c)
      puts("Rafael ganhou");
    else if (b>=r && b>=c)
      puts("Beto ganhou");
    else
      puts("Carlos ganhou");
  }

  return 0;
}
