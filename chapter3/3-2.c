#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);
	printf("%d\n", ((x % 2) == 0) );

	return 0;
}