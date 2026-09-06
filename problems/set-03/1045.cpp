#include <bits/stdc++.h>
using namespace std;

int main(void) {
  array<double, 3> t;

  cin >> t[0] >> t[1] >> t[2];
  sort(t.rbegin(), t.rend());

  if(t[0] >= t[1] + t[2]) {
    puts("NAO FORMA TRIANGULO");
    return 0;
  }

  double catetos = t[1]*t[1] + t[2]*t[2];
  if (t[0]*t[0]==catetos)
    puts("TRIANGULO RETANGULO");
  else if (t[0]*t[0]>catetos)
    puts("TRIANGULO OBTUSANGULO");
  else
    puts("TRIANGULO ACUTANGULO");

  if (t[0]==t[1] && t[0]==t[2])
    puts("TRIANGULO EQUILATERO");
  else if (t[0]==t[1] || t[0]==t[2] || t[1]==t[2])
    puts("TRIANGULO ISOSCELES");

  return 0;
}
