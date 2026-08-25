#include <bits/stdc++.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int j=1;
  for (int i=0; i<n; i++) {
    printf("%d %d %d PUM\n", j + i*3, j+1 + i*3, j+2 +i*3);
    j++;
  }
}
