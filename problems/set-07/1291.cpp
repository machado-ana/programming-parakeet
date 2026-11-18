#include <bits/stdc++.h>
#define PI (double) acos(-1)

int main(void) {
  double a;
  double x, y4, z4;

  while (scanf("%lf", &a) != EOF) {
    x = a*a * (1 + PI/3 - sqrt(3));
    y4 = a*a * (PI/3 + 2*sqrt(3) - 4);
    z4 = a*a * (4 - sqrt(3) - 2*PI/3);
    printf("%.3lf %.3lf %.3lf\n", x, y4, z4);
  }

  return 0;
}

