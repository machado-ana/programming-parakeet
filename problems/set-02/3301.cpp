#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int h, z, l;

  scanf("%d %d %d", &h, &z, &l);

  if (h > z && h > l) {
    if (z > l)
      cout << "zezinho\n";
    else
      cout << "luisinho\n";
  } else if (z > h && z > l) {
    if (h > l)
      cout << "huguinho\n";
    else
      cout << "luisinho\n";
  } else {
    if (h > z)
      cout << "huguinho\n";
    else
      cout << "zezinho\n";
  }

  return 0;
}
