#include <bits/stdc++.h>

int main(void) {
	int real;
	int cents;
	int moedas[5];
	int notas[5];

	scanf("%d.%d", &real, &cents);

	// Inicializacao do vetor
	for (int j=0; j<6; j++) {
		moedas[j] = 0;
		notas[j] = 0;
	}

	while (real/100 > 0) {
		real -= 100;
		notas[0]++;
	}
	while (real/50 > 0) {
		real -= 50;
		notas[1]++;
	}
	while (real/20 > 0) {
		real -= 20;
		notas[2]++;
	}
	while (real/10 > 0) {
		real -= 10;
		notas[3]++;
	}
	while (real/5 > 0) {
		real -= 5;
		notas[4]++;
	}
	while (real/2 > 0) {
		real -= 2;
		notas[5]++;
	}
	
	while (real>0) {
		real--;
		moedas[0]++;
	}
	while (cents/50 > 0) {
		cents -= 50;
		moedas[1]++;
	}
	while (cents/25 > 0) {
		cents -= 25;
		moedas[2]++;
	}
	while (cents/10 > 0) {
		cents -= 10;
		moedas[3]++;
	}
	while (cents/5 > 0) {
		cents -= 5;
		moedas[4]++;
	}
	while (cents>0) {
		cents--;
		moedas[5]++;
	}


	puts("NOTAS:");
	printf("%d nota(s) de R$ 100.00\n", notas[0]);
	printf("%d nota(s) de R$ 50.00\n", notas[1]);
	printf("%d nota(s) de R$ 20.00\n", notas[2]);
	printf("%d nota(s) de R$ 10.00\n", notas[3]);
	printf("%d nota(s) de R$ 5.00\n", notas[4]);
	printf("%d nota(s) de R$ 2.00\n", notas[5]);

	puts("MOEDAS:");
	printf("%d moeda(s) de R$ 1.00\n", moedas[0]);
	printf("%d moeda(s) de R$ 0.50\n", moedas[1]);
	printf("%d moeda(s) de R$ 0.25\n", moedas[2]);
	printf("%d moeda(s) de R$ 0.10\n", moedas[3]);
	printf("%d moeda(s) de R$ 0.05\n", moedas[4]);
	printf("%d moeda(s) de R$ 0.01\n", moedas[5]);

	return 0;
}
