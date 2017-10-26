#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number[10000];
	int quantity;
	int tmp;
	int i, j;
	int remainder_j;
	int remainder_j_1;
	scanf("%d", &quantity);

	for (i = 0; i < quantity; i++)
		scanf("%d", &number[i]);

	for (i = 0; i < quantity; i++) 
		for (j = 0; j < quantity - i - 1; j++)
		{
			remainder_j = number[j];
			remainder_j_1 = number[j+1];

			while(remainder_j % 10 == remainder_j_1 % 10 && remainder_j > 0)
			{	
				remainder_j /= 10;
				remainder_j_1 /= 10;
			}
			if (remainder_j % 10 <= remainder_j_1 % 10)
				;
			else 
			{
				tmp = number[j];
				number[j] = number[j+1];
				number[j+1] = tmp;
			}
		}	
	for (i = 0; i < quantity; i++) 
		printf("%d\n", number[i]);

	return 0;
}
// 2017-9-3, 2 hours
// 2017-9-4, 5 minutes