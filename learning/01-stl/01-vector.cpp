#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
using namespace std;

void printDots(void) {
  for (int i=0; i<3; i++) {
    cout << "." << flush;
    sleep(1);
  }
  cout << endl;
}

void printVector(vector<int> v) {
  vector<int>::iterator it;
  for (it=v.begin(); it<v.end(); it++) {
    cout << "[" << *it << "] " << flush;
    sleep(1);
  }
  cout << endl;
}

int main(void) {
  vector<int> vec;
  vector<int>::iterator it;

  cout << "   === Vector Example ===" << endl;
  cout << " > Pushing back items";
  printDots();
  vec.push_back(50);
  vec.push_back(20);
  vec.push_back(40);
  vec.push_back(30);
  vec.push_back(10);

  cout << "\n > Printing with size() method...\n   ";
  for (int i=0; i<vec.size(); i++) {
    cout << "[" << vec[i] << "] " << flush;
    sleep(1);
  }
  cout << endl;

  cout << "\n > Printing using iterator...\n   ";
  for (it=vec.begin(); it<vec.end(); it++) {
    cout << "[" << *it << "] " << flush;
    sleep(1);
  }
  cout << endl;

  cout << "\n > Erasing second item...\n   ";
  vec.erase(vec.begin()+1);
  printVector(vec);

  cout << "\n > Popping back last item...\n   ";
  vec.pop_back();
  printVector(vec);

  cout << "\n > Sorting Vector";
  printDots();
  cout << "   ";
  sort(vec.begin(), vec.end());
  printVector(vec);

  cout << "\n > Calculating Vector info";
  printDots();
  cout << "   First item: " << *(vec.begin()) << endl;
  sleep(1);
  cout << "   Second item: " << vec.at(1) << endl;
  sleep(1);
  cout << "   Last item: " << *(vec.end()-1) << endl;
  sleep(1);

  return 0;
}
