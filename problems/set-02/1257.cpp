#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int l;
  int hash;
  string line;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    hash = 0;
    scanf("%d ", &l);
    for (int j=0; j<l; j++) {
      getline(cin, line);
      for (int k=0; k<line.length(); k++)
        hash += (line[k]-'A') + j + k;
    }
    cout << hash << endl;
  }
  return 0;
}
