#include <bits/stdc++.h>

int main(void) {
	int n;

	scanf("%d", &n);

	for (int i=1; i<=n; i++)
		for (int j=0; j<2; j++)
			printf("%d %d %d\n", i, i*i+j, i*i*i+j);


	return 0;
}
