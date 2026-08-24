#include <iostream>
#include <stack>
#include <queue>
#include <unistd.h>
using namespace std;

void printDots(void) {
  for (int i=0; i<3; i++) {
    cout << "." << flush;
    sleep(1);
  }
  cout << endl;
}

void initAdapters(stack<int>& s, queue<int>& q) {
  for (int i=0; i<5; i++) {
    s.push(i);
    q.push(i);
  }
}

void printStack(stack<int> s) {
  while (!s.empty()) {
    cout << "[" << s.top() << "] " << flush;
    s.pop();
    sleep(1);
  }
  cout << endl;
}

void printQueue(queue<int> q) {
  while (!q.empty()) {
    cout << "[" << q.front() << "] " << flush;
    q.pop();
    sleep(1);
  }
  cout << endl;
}

int main(void) {
  stack<int> stk;
  queue<int> que;

  initAdapters(stk, que);

  cout << "   === Conteiner Adapters Example ===\n";
  cout << " > Pushing items...\n";
  cout << "   Stack: ";
  printStack(stk);
  cout << "   Queue: ";
  printQueue(que);

  cout << "\n > Collecting info";
  printDots();
  cout << "   Stack   (top): " << stk.top() << endl;
  cout << "   Queue (front): " << que.front() << endl;

  cout << "\n > Popping items...\n";
  cout << "   Stack: ";
  stk.pop();
  printStack(stk);
  cout << "   Queue: ";
  que.pop();
  printQueue(que);

  return 0;
}
