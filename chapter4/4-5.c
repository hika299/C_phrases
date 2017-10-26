#include <stdio.h>

int main(int argc, char const *argv[])
{
	int discriminant;
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	discriminant = (b*b - 4*a*c);
	if (discriminant == 0)
		printf("%d\n", 0);
	else if (discriminant > 0)
		printf("%d\n", 1);
	else
		printf("%d\n", -1);

	return 0;
}