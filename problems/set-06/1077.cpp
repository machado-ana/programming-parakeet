#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
  switch (c) {
    case '^': return 3;
    case '*': case '/': return 2;
    case '+': case '-': return 1;
    default: return 0;
  }
}


int main(void) {
  int t;

  cin >> t;
  while (t--) {
    string output = "";
    string input;
    stack<char> ops;

    cin >> input;
    for (char c : input) {
      if (c == '(') {
        ops.push(c);
      } else if (c == ')') {
        while (!ops.empty() && ops.top()!='(') {
          output += ops.top();
          ops.pop();
        }
        if (ops.top() == '(') ops.pop();
      } else if (prec(c)>0) {
        while (!ops.empty() && prec(c)<=prec(ops.top())) {
          output += ops.top();
          ops.pop();
        }
        ops.push(c);
      } else {
        output += c;
      }
    }
    while (!ops.empty() ) {
      output += ops.top();
      ops.pop();
    }
    cout << output << endl;
  }
  return 0;
}
