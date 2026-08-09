#include <bits/stdc++.h>

/*
	notas: 100, 50, 20, 10, 5, 2
	moedas: 1.00, 0.50, 0.25, 0.10, 0.05, 0.01
*/

#define SZ 6

int main(void) {
	int real;
	int cents;
	int notas[SZ];
	int moedas[SZ];

	// 126
	// 126 % 100 = 126 - 100 = 26
	// 26 % 50 = 26
	// 26 % 20 = 26 - 20 = 6
	// 6 % 10 = 6
	// 6 % 5 = 6 - 5 = 1
	// 1 % 2 = 1
	// 1 - 1 = 0

	scanf("%d.%d", &real, &cents);
	

	if (real%2 > 0) {
		real--;
		moedas[0]++;
	}

	while (real%5 > 0)
	while (real%10 != 0)
		while (real%5 != 0)

	return 0;
}
