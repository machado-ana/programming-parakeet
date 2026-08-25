#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int a, b;
  char op;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d%c%d", &a, &op, &b);

    if (a == b) {
      cout << a*b << endl;
      continue;
    }

    if (op >= 'a' && op <= 'z')
      cout << a+b << endl;
    else
      cout << b-a << endl;
  }
  return 0;
}
