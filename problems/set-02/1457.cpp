#include <bits/stdc++.h>

long long kFat(int& n, int k) {
  if (n-k == 1) return n;
  long long total = 1;
  for (int i=n; i>1; i -= k)
    total *= i;
  return total;
}

int main(void) {
  int t;
  int n;
  char k[22];
  long long total;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d%s", &n, k);
    total = kFat(n, strlen(k));
    printf("%lld\n", total);
  }
  return 0;
}
