#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int leds;
  string v;
  int digitos[10];
  int num_leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  scanf("%d ", &n);
  for (int i=0; i<n; i++) {
    leds = 0;
    for (int i=0; i<10; i++)
      digitos[i] = 0;

    getline(cin, v);
    for (int i=0; i<v.length(); i++) {
      digitos[v[i] - '0']++;
    }
    for (int i=0; i<10; i++) {
      leds += digitos[i]*num_leds[i];
    }
    printf("%d leds\n", leds);
  }
  return 0;
}
