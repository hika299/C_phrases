#include <stdio.h>
int main(int argc, char const *argv[])
{
	double sin;
	double term;
	double x;
	int n = 15;
	int i;

	scanf("%lf", &x);
	sin = x;
	term = x;
	for (i = 2; i <= n; i++)
	{		
		term = term * (-1) * x * x / ( (2*i-2) * (2*i-1) );
		sin += term;
	}
	printf("%f\n", sin);

	return 0;
}
// 2017-9-4