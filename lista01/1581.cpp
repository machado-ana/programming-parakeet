#include <bits/stdc++.h>

int main(void) {
	int n;
	int k;
	char first_language[25];
	char language[25];
	bool ingles;

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		ingles = false;

		scanf("%d", &k);
		scanf("%s", first_language);

		for (int j=0; j<k-1; j++) {
			scanf("%s", language);
			if (strcmp(first_language, language) != 0)
				ingles = true;
		}

		if (ingles)
			puts("ingles");
		else
			puts(first_language);
	}
	return 0;
}
