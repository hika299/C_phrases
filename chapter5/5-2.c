#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int counter;

	scanf("%d", &n);
	
	for (counter = 1; counter <= n; counter++)
		printf("%d\n", counter);
	for (counter = n-1; counter >= 1; counter--)
		printf("%d\n", counter);

	return 0;
}
// 2017-8-30