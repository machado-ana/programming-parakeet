#include <bits/stdc++.h>

double dist(int &x1, int &y1, int &x2, int &y2) {
  return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(void) {
  int r1, x1, y1;
  int r2, x2, y2;
  double d;

  while (scanf("%d %d %d %d %d %d",
    &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
    d = dist(x1, y1, x2, y2)+r2;
    if (d<=r1)
      puts("RICO");
    else
      puts("MORTO");
  }
  return 0;
}
