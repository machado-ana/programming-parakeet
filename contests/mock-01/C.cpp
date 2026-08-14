#include <bits/stdc++.h>

// a+b > c && b+c > a && c+a > b

bool formaTriangulo(int x, int y, int z) {
	if (x+y >= z && x+z>= y && y+z >= x)
		return true;
	return false;
}

int main() {
	int a, b, c, d;

	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
		if (formaTriangulo(a, b, c) || formaTriangulo(a, b, d)
		|| formaTriangulo(b, c, d) || formaTriangulo(a, c, d))
			puts("S");
		else
			puts("N");
	}

	return 0;
}
