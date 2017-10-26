#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int factor;
	int power = 0;

	scanf("%d", &number);
	for (factor = 2; factor <= number; factor++)
	{
		if (number % factor != 0)
			continue;
		while (number % factor == 0)
		{
			power++;
			number /= factor;
		}	
		printf("%d\n", factor);
		printf("%d\n", power);
		power = 0;
		
	}

	return 0;
}
// 2017-8-31