#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a + b > c && b + c > a && c + a > b)
		printf("%d\n", 1);
	else
		printf("%d\n", 0);

	return 0;
}