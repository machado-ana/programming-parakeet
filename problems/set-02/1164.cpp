#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  long int x;
  int dividers;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    dividers = 0;
    scanf("%ld", &x);
    for (int j=1; j<x; j++) {
      if (x%j == 0)
        dividers += j;
    }
    if (dividers == x)
      cout << x << " eh perfeito\n";
    else
      cout << x << " nao eh perfeito\n";
  }

  return 0;
}
