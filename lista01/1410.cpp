#include <bits/stdc++.h>

#define SZ 11 		// Max players = 11
#define DIST 11000 	// Max dist = 10 000

void sortArray(int sz, int vet[]) {
	int aux;
	for (int i=0; i<sz; i++)
		for (int j=0; j<sz-i-1; j++)
			if (vet[j] > vet[j+1]) {
				aux = vet[j+1];
				vet[j+1] = vet[j];
				vet[j] = aux;
			}
}

int main(void) {
	int a, d; 			// Attacking, Defending
	int b[SZ], c[SZ]; 	// A dist, D dist

	scanf("%d %d", &a, &d);

	while (a || d) {
		for (int i=0; i<a; i++)
			scanf("%d", &b[i]);

		for (int i=0; i<d; i++)
			scanf("%d", &c[i]);

		sortArray(a, b);
		sortArray(d, c);
		
		if (b[0] < c[1])
			puts("Y");
		else
			puts("N");

		scanf("%d %d", &a, &d);
	}

	return 0;
}
