#include <bits/stdc++.h>
using namespace std;

#define SZ 1010

int main(void) {
  int n, l;
  bool encaixa;
  char n1[SZ];
  char n2[SZ];

  cin >> n;
  for (int i=0; i<n; i++) {
    encaixa = 1;
    cin >> n1 >> n2;
    for (int j=0; j<strlen(n2); j++) {
      if (n1[strlen(n1)-1-j] != n2[strlen(n2)-1-j]) {
        encaixa = 0;
        break;
      }
    }
    if (encaixa)
      puts("encaixa");
    else
      puts("nao encaixa");
  }
  return 0;
}
