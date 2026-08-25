#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  list<int> soldiers;
  list<int>::iterator it;
  int k, n;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d %d", &n, &k);
    // Criacao da lista
    for (int j=1; j<=n; j++)
      soldiers.push_back(j);
    it = soldiers.begin();
    while (soldiers.size() > 1) {
      // Somar o iterator k vezes
      for (int l=0; l<k-1; l++) {
        it++;
        if (it == soldiers.end())
          it = soldiers.begin();
      }
      // Apaga o elemento do it e retorna it++
      it = soldiers.erase(it);
      if (it == soldiers.end())
        it = soldiers.begin();
    }
    printf("Case %d: %d\n", i+1, soldiers.front());
    soldiers.clear();
  }
  return 0;
}
