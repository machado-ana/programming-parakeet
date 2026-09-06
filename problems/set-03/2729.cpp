#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  string item, line;
  set<string> list;
  set<string>::iterator it;

  cin >> t;
  cin.ignore();
  while (t--) {
    getline(cin, line);
    stringstream ss(line);
    while(ss >> item) {
      list.insert(item);
    }
    for (it=list.begin(); it!=list.end(); it++) {
      if (it!=list.begin()) cout << " ";
      cout << (*it);
    }
    puts("");
    list.clear();
  }
  return 0;
}
