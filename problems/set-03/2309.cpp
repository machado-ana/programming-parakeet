#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int p;
  int a_wins = 0, b_wins = 0;
  int roll;
  array<int, 3> a, b;

  cin >> p;
  while (p--) {
    roll = 0;
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for (int i=0; i<3; i++) {
      // Tratando entrada Q (12)
      if (a[i] == 12) a[i]-=2;
      if (b[i] == 12) b[i]-=2;
      // Tratando entradas <= 3
      if (a[i] <= 3) a[i]+=13;
      if (b[i] <= 3) b[i]+=13;
      // Vitorias na rodada
      if (a[i]>=b[i]) roll++;
      else roll--;
    }
    if (roll>=0) a_wins++;
    else b_wins++;
  }
  printf("%d %d\n", a_wins, b_wins);
  return 0;
}
