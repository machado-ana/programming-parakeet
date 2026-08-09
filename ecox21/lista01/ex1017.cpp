#include <bits/stdc++.h>

#define KM_PER_L 12

int main(void) {
	float liters;
	int time;
	int spd;

	scanf("%d %d", &time, &spd);

	liters = (float)(time * spd) / KM_PER_L;

	printf("%.3f\n", liters);
	return 0;
}
