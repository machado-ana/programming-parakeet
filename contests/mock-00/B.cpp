#include <bits/stdc++.h>

int main() {
	int n;
	float c;

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		int d = 0;
		scanf("%f", &c);

		while (c > 1) {
			d++;
			c /= 2;
		}

		printf("%d dias\n", d);
	}

	return 0;
}
