#include <bits/stdc++.h>
using namespace std;

#define C (double)3e8
#define L (double)7e-7
#define K (double)1e-9

double solve(double &v) {
  return (L * (sqrt((C-v)/(C+v))-1) + L)/K;
}

int main(void) {
  double l, v;
  cin >> v;

  l = solve(v);

  if (l<400) cout << "invisivel\n";
  else if (l<425) cout << "violeta\n";
  else if (l<445) cout << "anil\n";
  else if (l<500) cout << "azul\n";
  else if (l<575) cout << "verde\n";
  else if (l<585) cout << "amarelo\n";
  else if (l<620) cout << "laranja\n";
  else if (l<750) cout << "vermelho\n";
  else cout << "invisivel\n";

  return 0;
}
