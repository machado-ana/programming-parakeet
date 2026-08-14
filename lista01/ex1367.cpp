#include <bits/stdc++.h>

int main(void) {
	int n, s, p;
	char problem;
	int time;
	char judge[12];
	int errors;

	scanf("%d", &n);

	while (n) {
		char wrong_solutions[n];
		errors = 0;
		s = 0;
		p = 0;

		for (int j=0; j<n; j++) {
			scanf(" %c %d %s", &problem, &time, judge);

			if (judge[0] == 'i') {
				wrong_solutions[errors] = problem;
				errors++;
			} else {
				s++;
				p += time;
				for (int i=0; i<errors; i++) {
					if (problem == wrong_solutions[i])
						p += 20;
				}
			}
		}

		printf("%d %d\n", s, p);

		scanf("%d", &n);
	}

	return 0;
}
