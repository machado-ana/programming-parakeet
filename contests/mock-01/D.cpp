#include <bits/stdc++.h>

int main() {
	int n, h;

	scanf("%d %d", &n, &h);

	int alturas[n];
	int brinquedos = 0;

	for (int i=0; i<n; i++) {
		scanf("%d", &alturas[i]);
		if (h >= alturas[i])
			brinquedos++;
	}

	printf("%d\n", brinquedos);

	return 0;
}
