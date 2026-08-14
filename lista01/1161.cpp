#include <bits/stdc++.h>

unsigned long int fat(int x) {
	unsigned long int fat = 1;	
	for (int i=2; i<=x; i++)
		fat *= i;
	return fat;
}

int main(void) {
	int m, n;

	while (scanf("%d %d", &m, &n) != EOF) {
		unsigned long int sum;
		sum = fat(m) + fat(n);
		printf("%lu\n", sum);
	}

	return 0;
}
