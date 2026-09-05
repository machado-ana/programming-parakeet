#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;

  cin >> n;
  printf("%d ano(s)\n", n/365);
  printf("%d mes(es)\n", (n%365)/30);
  printf("%d dia(s)\n", n%365%30);
  return 0;
}
