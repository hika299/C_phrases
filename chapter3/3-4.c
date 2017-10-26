#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int result;
	scanf("%d", &number);
	result = ((number%3 == 0) || (number%5 == 0)) && (number%15 != 0);
	printf("%d\n", result);

	return 0;
}