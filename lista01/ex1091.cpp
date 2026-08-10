#include <bits/stdc++.h>

int main(void) {
	int m, n;
	int x, y;
	int k;

	scanf("%d", &k);

	while (k) {
		scanf("%d %d", &m, &n);

		for (int i=0; i<k; i++) {
			scanf("%d %d", &x, &y);

			if (x==m || y==n)
				puts("divisa");
			else if (y-n > 0)	// Se ta no norte
				if (x-m > 0)
					puts("NE");
				else
					puts("NO");
			else				// Se ta no sul
				if (x-m > 0)
					puts("SE");
				else
					puts("SO");
		}

		scanf("%d", &k);
	}


	return 0;
}

