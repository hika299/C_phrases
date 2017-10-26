#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	int tmp;
	int sum;
	// int counts;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	// counts = a - b - 1;
	// counts = (counts > 0)? counts : -counts;
	sum = (a + b) * (b - a + 1) / 2;
	printf("%d\n", sum);

	return 0;
}