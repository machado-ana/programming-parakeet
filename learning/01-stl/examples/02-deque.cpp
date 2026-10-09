#include <iostream>
#include <deque>
#include <unistd.h>
using namespace std;

void printDots(void) {
  for (int i=0; i<3; i++) {
    cout << "." << flush;
    sleep(1);
  }
  cout << endl;
}

void printDeq(deque<int> d) {
  for (deque<int>::iterator it=d.begin(); it<d.end(); it++) {
    cout << "[" << *it << "] " << flush;
    sleep(1);
  }
  cout << endl;
}

int main(void) {
  deque<int> deq;

  cout << "   === Deque Example ===\n";
  cout << " > Pushing back items...\n";
  deq.push_back(40);
  cout << "   40 -> ";
  printDeq(deq);

  deq.push_back(50);
  cout << "   50 -> ";
  printDeq(deq);
  cout << endl;

  cout << " > Pushing front items...\n";
  deq.push_front(20);
  cout << "   20 -> ";
  printDeq(deq);

  deq.push_front(30);
  cout << "   30 -> ";
  printDeq(deq);
  cout << endl;

  cout << " > Third element: " << deq[2] << endl;
  return 0;
}
