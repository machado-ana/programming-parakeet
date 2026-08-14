#include <bits/stdc++.h>

int main(void) {
	long int n;
	long int students = 0;


	scanf("%ld", &n);
	int s[n];

	for (int i=0; i<n; i++) {
		scanf("%d", &s[i]);
		students += s[i] - s[i]%3;
	}

	printf("%ld\n", students);

	return 0;
}
