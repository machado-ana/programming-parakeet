#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
  ll n;

  cin >> n;
  while (n) {
    map<ll, ll> nums;

    for (ll i=0; i<n; i++) {
      ll num;
      cin >> num;
      nums[num]++;
    }

    for (auto &p : nums) {
      if (p.second%2==1) {
        cout << p.first << "\n";
        break;
      }
    }

    cin >> n;
  }
  return 0;
}
