#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int i;

	scanf("%d", &n);

	if (n == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 2; (i * i <= n) && (n % i != 0); i++ )
			;
		if (i * i <= n)
			printf("%d\n", 1);
		else
			printf("%d\n", 0);
	}

	
	
	return 0;
}