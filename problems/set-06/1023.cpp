#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
  int n, t = 1;

  cin >> n;
  while (n) {
    ll total = 0;
    int num = 0, moradores, consumo;
    map<int, int> consumo_morador;
    for (int i=0; i<n; i++) {
      cin >> moradores >> consumo;
      consumo_morador[consumo/moradores] += moradores;
      total += consumo;
      num += moradores;
    }
    total = total*100/num;

    bool first = true;
    if (t!=1) cout << "\n";
    cout << "Cidade# " << t << ":\n";
    for (auto &c : consumo_morador) {
      if (!first) cout << " ";
      cout << c.second
        << "-"
        << c.first;
      first = false;
    }

    cout << "\nConsumo medio: "
      << total/100 << "." <<
      setfill('0') << setw(2) << total%100
      << " m3.\n";

    cin >> n;
    t++;
  }
  return 0;
}
