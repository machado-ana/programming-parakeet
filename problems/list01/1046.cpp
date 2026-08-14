#include <bits/stdc++.h>

int main(void) {
	int start, end;
	int duration;

	scanf("%d %d", &start, &end);

	if (start > end)
		duration = 24 - start + end;
	else if (start == end)
		duration = 24;
	else
		duration = end - start;

	printf("O JOGO DUROU %d HORA(S)\n", duration);

	return 0;
}
