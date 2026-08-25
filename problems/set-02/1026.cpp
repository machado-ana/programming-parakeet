#include <bits/stdc++.h>
using namespace std;

int main(void) {
  unsigned int a, b;
  while (scanf("%u %u", &a, &b) != EOF)
    cout << (a ^ b) << endl;
  return 0;
}
