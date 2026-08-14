#include <bits/stdc++.h>

int main(void) {
	int r, c;
	char notas_disponiveis[6] = {100, 50, 20, 10, 5, 2};
	char moedas_disponiveis[6] = {1, 50, 25, 10, 5, 1};
	int moedas[6];
	int notas[6];

	scanf("%d.%d", &r, &c);

	puts("NOTAS:");
	for (int i=0; i<6; i++) {
		notas[i] = r/notas_disponiveis[i];
		r %= notas_disponiveis[i];
		printf("%d nota(s) de R$ %d.00\n", notas[i], notas_disponiveis[i]);
	}

	puts("MOEDAS:");
	moedas[0] = r;
	printf("%d moeda(s) de R$ %d.00\n", moedas[0], moedas_disponiveis[0]);
	for (int i=1; i<6; i++) {
		moedas[i] = c/moedas_disponiveis[i];
		c %= moedas_disponiveis[i];
		printf("%d moeda(s) de R$ 0.%02d\n", moedas[i], moedas_disponiveis[i]);
	}

	return 0;
}
