#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int a;
  long long t;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> t;
    if (t<2015)
      cout << 2015-t << " D.C.\n";
    else
      cout << t-2014 << " A.C.\n";
  }
  return 0;
}
