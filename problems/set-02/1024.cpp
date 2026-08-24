#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<string> encrypted;
  int n;
  scanf("%d ", &n);

  for (int i=0; i<n; i++) {
    string txt;
    getline(cin, txt);
    int sz = txt.length();

    for (int j=0; j<sz; j++) {
      if ((txt[j]>='a' && txt[j]<='z') || (txt[j]>='A' && txt[j]<='Z'))
        txt[j] += 3;
      }

    char aux;
    for (int j=0; j<sz/2; j++) {
      aux = txt[j];
      txt[j] = txt[sz-j-1];
      txt[sz-j-1] = aux;
    }

    for (int j=sz/2; j<sz; j++) {
      txt[j]--;
    }
    encrypted.push_back(txt);
  }

  vector<string>::iterator it;
  for (it=encrypted.begin(); it<encrypted.end(); it++)
    cout << *it << endl;
  return 0;
}
