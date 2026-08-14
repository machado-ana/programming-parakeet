#include <bits/stdc++.h>

#define GRAV 9.80665
#define PI 3.14159

double oblique_launch(double h, double angle, double spd) {
	double x;
	double t1, t2, t;
	double h1;
	double x_spd, y_spd;

	angle *= PI/180;

	x_spd = cos(angle) * spd;
	y_spd = sin(angle) * spd;

	h1 = y_spd*y_spd / (2*GRAV);	// Subida ate v = 0 m/s
	t1 = y_spd/GRAV;				// Tempo do deslocamento h1		
	t2 = sqrt(2*(h+h1)/GRAV);		// Tempo do deslocamento h1+h
	t = t1 + t2;					// Tempo total de voo		

	x = x_spd*t;					// Distancia do MRU em x		

	return x;
}

int main(void) {
	double h;			// [1, 150]
	int p1, p2; 		// [1, 9999]
	int n;				// [1, 100]
	double angle; 		// [1, 180]
	double spd; 		// [1, 150]

	while (scanf("%lf %d %d %d", 
		&h, &p1, &p2, &n) != EOF) {

		for (int i=0; i<n; i++) {
			double x;
			bool hit = false;

			scanf("%lf %lf", &angle, &spd);

			x = oblique_launch(h, angle, spd);
			
			if (x >= p1 && x <= p2)
				hit = true;

			if (hit)
				printf("%.5lf -> DUCK\n", x);
			else
				printf("%.5lf -> NUCK\n", x);
		}

	}

	return 0;
}
