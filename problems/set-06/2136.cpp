#include <bits/stdc++.h>
using namespace std;

int main(void) {
  set<string> yes;
  set<string> no;
  int winner_sz = 0;
  string winner;

  string line;
  getline(cin, line);
  while (line != "FIM") {
    stringstream ss(line);
    string name, opt;
    while (ss >> name >> opt) {
      if (opt == "YES") {
        int sz = name.size();
        yes.insert(name);
        if (name.size() > winner_sz) {
          winner_sz = name.size();
          winner = name;
        }
      }
      else no.insert(name);
    }
    getline(cin, line);
  }

  for (auto &n : yes) {
    cout << n << "\n";
  }
  for (auto &n : no) {
    cout << n << "\n";
  }

  cout << "\nAmigo do Habay:\n"
    << winner << "\n";
  return 0;
}
