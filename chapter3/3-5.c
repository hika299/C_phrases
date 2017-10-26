#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int n_50, n_10, n_5, n_1;

	scanf("%d", &number);

	n_50 = (number / 50);
	number %= 50;
	n_10 = (number / 10);
	number %= 10;
	n_5 = (number / 5);
	number %= 5;
	n_1 = number;

	printf("%d\n", n_50);
	printf("%d\n", n_10);
	printf("%d\n", n_5);
	printf("%d\n", n_1);

	return 0;
}