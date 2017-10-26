#include <stdio.h>

int main(int argc, char const *argv[])
{
	int judge;
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	judge = (b*b - 4*a*c) == 0;
	printf("%d\n", judge);

	return 0;
}