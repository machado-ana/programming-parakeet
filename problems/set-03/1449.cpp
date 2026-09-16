#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  int m, n;

  cin >> t;
  while (t--) {
    cin >> m >> n;
    cin.ignore();

    // Dicionario
    map<string, string> dict;
    string pt, jp;
    while (m--) {
      getline(cin, jp);
      getline(cin, pt);
      dict.insert(make_pair(jp, pt));
    }

    // Musica
    string line, word;
    while (n--) {
      getline(cin, line);
      stringstream ss(line);
      bool first = 1;
      while (ss >> word) {
        if (!first) cout << " ";
        if (dict.find(word) != dict.end())
          cout << dict[word];
        else
          cout << word;
        first = 0;
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
