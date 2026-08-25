#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int maior = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    int d;
    scanf("%d", &d);
    if (d>maior)
      maior = d;
  }
  cout << maior+1 << endl;
  return 0;
}
