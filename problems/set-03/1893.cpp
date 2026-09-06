#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;

  cin >> a >> b;
  if (a>b && b>=3 && b<=96)
    puts("minguante");
  else if (b<=2)
    puts("nova");
  else if (b>=3 && b<=96)
    puts("crescente");
  else if (b>=97 && b<=100)
    puts("cheia");

  return 0;
}
