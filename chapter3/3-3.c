#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	int sum = 0;
	scanf("%d", &x);
	sum += (x / 1000);
	x %= 1000;
	sum += (x / 100);
	x %= 100;
	sum += (x / 10);
	x %= 10;
	sum += x;
	printf("%d\n", sum);

	return 0;
}