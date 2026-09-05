]#include <bits/stdc++.h>
using namespace std;

int main(void) {
  float n;

  cin >> n;
  if (n>=0 && n<=25)
    puts("Intervalo [0,25]");
  else if (n>25 && n<=50)
    puts("Intervalo (25,50]");
  else if (n>50 && n<=75)
    puts("Intervalo (50,75]");
  else if (n>75 && n<=100)
    puts("Intervalo (75,100]");
  else
    puts("Fora de intervalo");
  return 0;
}
