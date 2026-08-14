#include <bits/stdc++.h>

int main(void) {
	int x1, y1, x2, y2;
	int moves = 0;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	// Para com entrada "0 0 0 0"
	while(x1 || y1 || x2 || y2) {

		if (x1 == x2 && y1 == y2)
			moves = 0;
		else if (x1 == x2 || y1 == y2)
			moves = 1;
		else if (fabs(x1-x2) == fabs(y1-y2))
			moves = 1;
		else
			moves = 2;

		printf("%d\n", moves);
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	}

	return 0;
}
