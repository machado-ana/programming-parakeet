#include <bits/stdc++.h>

int main(void) {
  int n;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    bool encaixa = true;
    char n1[1010], n2[1010];
    scanf("%s %s", n1, n2);
    for (int i=0; i<strlen(n2); i++) {
      if (n1[strlen(n1)-i-1] != n2[strlen(n2)-i-1]) {
        encaixa = false;
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
