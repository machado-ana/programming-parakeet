#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
  bool a_odd = a%2;
  bool b_odd = b%2;
  // Se a paridade for diferente
  if (a_odd != b_odd)
    return (a_odd < b_odd);
  // Se forem ambos impares
  if (a_odd)
    return (b < a);
  // Se forem ambos pares
  return (a < b);
}

int main(void) {
  int t, n;
  vector<int> nums;

  cin >> t;
  for (int i=0; i<t; i++) {
    cin >> n;
    nums.push_back(n);
  }

  sort(nums.begin(), nums.end(), comp);
  for (int x : nums)
    cout << x << endl;

  return 0;
}
