#include <iostream>
#include <list>
#include <unistd.h>
using namespace std;

void printList(list<string> ls) {
  list<string>::iterator it;
  for (it=ls.begin(); it!=ls.end(); it++) {
    cout << "[" << *it << "] " << flush;
    sleep(1);
  }
  cout << endl;
}

int main(void) {
    list<string> names;
    list<string>::iterator it;

    cout << "   === List Example ===\n";
    cout << " > Pushing back items...\n";
    cout << "   Fred     -> ";
    names.push_back("Fred");
    printList(names);

    cout << "   Salsicha -> ";
    names.push_back("Salsicha");
    printList(names);

    cout << "\n > Pushing front items...\n";
    cout << "   Velma    -> ";
    names.push_front("Velma");
    printList(names);

    cout << "   Scooby   -> ";
    names.push_front("Scooby");
    printList(names);

    cout << "\n > Inserting items...\n";
    it = names.begin(); it++;
    cout << "   Fred[1]  -> ";
    names.insert(it, "Fred");
    printList(names);

    cout << "\n > Removing items...\n";
    cout << "   Fred[X]  -> ";
    names.remove("Fred");
    printList(names);

    return 0;
}
