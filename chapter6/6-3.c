#include <stdio.h>

int main(int argc, char const *argv[])
{	
	const int range = 200;
	int quantityOfnumbers;

	int odd[range], even[range];
	int odd_counter = 0, even_counter = 0;
	int number;
	int i;

	scanf("%d", &quantityOfnumbers);

	for (i = 1; i <= quantityOfnumbers; i++)
	{
		scanf("%d", &number);
		if (number % 2 == 0)
		{
			even[even_counter] = number;
			even_counter++;
		}
		else 
		{
			odd[odd_counter] = number;
			odd_counter++;
		}
	}

	for (i = 0; i < odd_counter; i++)
		printf("%d ", odd[i]);
	printf("\n");

	for (i = 0; i < even_counter; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}
// 2017-9-2