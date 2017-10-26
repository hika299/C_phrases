#include <stdio.h>
int main(int argc, char const *argv[])
{
	double cos;
	double term;
	double x;
	int n = 15;
	int i;

	scanf("%lf", &x);
	cos = 1;
	term = 1;
	for (i = 2; i <= n; i++)
	{		
		term = term * (-1) * x * x / ( (2*i-3) * (2*i-2) );
		cos += term;
	}
	printf("%f\n", cos);

	return 0;
}
// 2017-9-4