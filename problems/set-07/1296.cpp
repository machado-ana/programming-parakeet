#include <bits/stdc++.h>

int main(void) {
  double a, b, c;

  while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
    double s = (a+b+c)/2;
    double h = s*(s-a)*(s-b)*(s-c);
    double ans;

    if (h<=0) ans = -1.000;
    else ans = sqrt(h) * 4/3;
    printf("%.3lf\n", ans);
  }
  return 0;
}

