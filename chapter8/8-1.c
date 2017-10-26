#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double r1, deg1,  r2, deg2;
	
	scanf("%lf", &r1);
	scanf("%lf", &deg1);
	scanf("%lf", &r2);
	scanf("%lf", &deg2);

	printf("%f\n", sqrt(r1*r1 + r2*r2 -2*r1*r2*cos(deg2-deg1) ) );

	return 0;
}