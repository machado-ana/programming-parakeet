#include <bits/stdc++.h>

int main(void) {
  int p, q;
  int product;
  float total = 0;

  scanf("%d", &p);
  for (int i=0; i<p; i++) {
    scanf("%d %d", &product, &q);
    total += (product%10 + 0.5)*q;
  }
  printf("%.2f\n", total);

  return 0;
}
