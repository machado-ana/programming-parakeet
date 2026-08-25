#include <bits/stdc++.h>

int main(void) {
  int meteorites;
  int test = 0, n;
  int x1, y1, x2, y2;
  int x, y;

  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  while (x1 || y1 || x2 || y2) {
    meteorites = 0;
    test++;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
      scanf("%d %d", &x, &y);
      if ((x>=x1 && x<=x2) && (y<=y1 && y>=y2))
        meteorites++;
    }
    printf("Teste %d\n%d\n", test, meteorites);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  }
  return 0;
}
