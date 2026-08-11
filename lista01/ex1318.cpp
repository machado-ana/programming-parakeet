#include <bits/stdc++.h>

#define SZ 20000

int main(void) {
	int n, m; 
	int clone;
	bool found_clone;

	scanf("%d %d", &n, &m);
	int t[SZ];

	while (n || m) {
		clone = 0;
		for (int i=0; i<m; i++)
			scanf("%d", &t[i]);

		for (int i=0; i<m; i++) {
			found_clone = false;
			for (int j=1; j<m-i; j++) {
				if (t[i] == -1)
					break;
				if (t[i] == t[j+i]) {
					t[j+i] = -1;
					if (found_clone == false) {
						clone++;
						found_clone = true;
					}
				}
			}
		}

		printf("%d\n", clone);

		scanf("%d %d", &n, &m);
	}

	return 0;
}
