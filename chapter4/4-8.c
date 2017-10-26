#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int tmp;
	int judge;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	// now, c is max
	judge = a*a + b*b - c*c;

	if (judge > 0)
		printf("%d\n", 1);
	else if (judge < 0)
		printf("%d\n", 2);
	else
		printf("%d\n", 3);

	return 0;
}