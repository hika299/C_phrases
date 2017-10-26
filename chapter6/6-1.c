#include <stdio.h>

int main(int argc, char const *argv[])
{
	int quantityOfnumber;
	const int range = 200;
	int number[range];
	int i;

	scanf("%d", &quantityOfnumber);
	for (i = 1; i <= quantityOfnumber; i++)
		scanf("%d", &number[i]);
	for (i = quantityOfnumber; i >= 1; i--)
		printf("%d ", number[i]);
	printf("\n");

	return 0;
}
// 2017-9-2