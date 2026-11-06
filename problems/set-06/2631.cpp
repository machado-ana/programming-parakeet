#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int M = 1e4+10;
int lk[M];
int sz[N];

void init(void) {
  for (int i=0; i<M; i++) lk[i] = i;
  for (int i=0; i<N; i++) sz[i] = 1;
}

int find(int x) {
  if (x == lk[x]) return x;
  return find(lk[x]);
}

void unite(int a, int b) {
  a = find(a);
  b = find(b);

  if (a==b) return;

  if (sz[b]>sz[a]) swap(a, b);

  sz[a] += sz[b];
  lk[b] = a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, q;

  bool first = true;
  while (cin >> n >> m >> q) {
    if (!first) cout << "\n";
    else first = false;
    init();
    for (int i=0; i<m; i++) {
      int x, y;
      cin >> x >> y;
      unite(x, y);
    }
    for (int i=0; i<q; i++) {
      int a, b;
      cin >> a >> b;
      if (find(a) == find(b)) cout << "S\n";
      else cout << "N\n";
    }
  }

  return 0;
}
