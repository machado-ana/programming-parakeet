#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  long long sum = 0;

  cin >> n;
  sum += n%10;
  do {
    sum += n/10;
  } while (n--);
  /*
  11 =
  1 2 3 4 5 6 7 8 9 = 10*1
  10 11 = 2 (n%10 +1)

  22
  1 2 3 4 5 6 7 8 9 = 10*1
  10 11 12 13 14 15 16 17 18 19
  20 21 22 = 12*2
  */
  cout << sum << endl;

  return 0;
}
