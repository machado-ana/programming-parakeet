#include <bits/stdc++.h>
using namespace std;

int main(void) {
  char cpf[16];
  int b1, b2;
  int n, j;

  while (scanf("%s", cpf) != EOF) {
    b1 = 0;
    b2 = 0;
    int j = 1;
    for (int i=0; i<12; i++) {
      if ((i+1)%4==0) continue;
      n = cpf[i] - '0';
      b1 += n*j;
      b2 += n*(10-j);
      j++;
    }
    if (b1%11%10 == cpf[12]-'0' && b2%11%10 == cpf[13]-'0')
      puts("CPF valido");
    else
      puts("CPF invalido");
  }
  return 0;
}
