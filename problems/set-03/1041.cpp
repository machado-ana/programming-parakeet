#include <bits/stdc++.h>
using namespace std;

int main(void) {
  float x, y;

  cin >> x >> y;
  if (y == 0 && x == 0)
    puts("Origem");
  else if (y==0)
    puts("Eixo X");
  else if (x==0)
    puts("Eixo Y");
  else if (y>=0 && x>=0)
    puts("Q1");
  else if (y>=0 && x<=0)
    puts("Q2");
  else if (y<=0 && x<=0)
    puts("Q3");
  else
    puts("Q4");
  return 0;
}
