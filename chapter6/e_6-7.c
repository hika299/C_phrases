#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int number = 10000;
	int prime[number];
	int i, j;
	// assume every number is prime
	for (i = 2; i < number; i++)
		prime[i] = 1;

	for (i = 2; i * i <= number; i++)
	{
		if (prime[i] == 0)
			continue;
		for (j = 2*i; j <= number; j += i)
			prime[j] = 0;
	}

	for (i = 2; i < number; i++)
		if (prime[i] == 1)
			printf("%d\n", i);
		
	return 0;
}
// 2017-9-2