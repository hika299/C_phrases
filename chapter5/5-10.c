#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int time;
	int t;
	int i;
	int tmp;
	int numberOfdigits = 0;

	scanf("%d", &number);
	scanf("%d", &time);

	tmp = number;
	// 先算出它有幾位數
	printf("%d\n", number);
	while (tmp > 0)
	{
		tmp /= 10;
		numberOfdigits = numberOfdigits + 1;
	}
	// printf("%d\n\n", numberOfdigits);
	for (t = 0; t < time; t++)
	{
		if (number % 10 == 0)
		{
			number /= 10;
			numberOfdigits = numberOfdigits - 1;
		}
		else 
		{
			tmp = number % 10;
			for (i = 0; i < numberOfdigits-1; i++)
				tmp *= 10;
			number = tmp + number / 10; 
		}
		printf("%d\n", number);
	}



	return 0;
}
// 2017-8-31