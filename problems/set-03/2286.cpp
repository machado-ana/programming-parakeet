#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, t=1;
  int pt1, pt2;
  string j1, j2;

  cin >> n;
  while (n) {
    cin.ignore();
    cin >> j1 >> j2;
    cout << "Teste " << t << endl;
    for (int i=0; i<n; i++) {
      cin >> pt1 >> pt2;
      if ((pt1+pt2)%2 == 0) cout << j1 << endl;
      else cout << j2 << endl;
    }
    cout << endl;
    t++;
    cin >> n;
  }

  return 0;
}
