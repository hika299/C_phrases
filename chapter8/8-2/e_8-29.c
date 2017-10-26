#include <stdio.h>
#include "polynomial.h"

#define N 33

int main(void)
{
	double coeficient[N];
	double x, y;
	int i, n, m;

	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		scanf("%lf", &(coeficient[i]));

	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%lf", &x);
		y = polynomial(x, coeficient, n);
		printf("%f\n", y);
	}
	return 0;
}