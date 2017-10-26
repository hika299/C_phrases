#include <stdio.h>

int main(int argc, char const *argv[])
{
	int judge;

	int x_1, y_1, x_2, y_2;

	scanf("%d", &x_1);
	scanf("%d", &y_1);
	scanf("%d", &x_2);
	scanf("%d", &y_2);

	judge = (x_1 * y_2 == x_2 * y_1);
		
	printf("%d\n", judge);

	return 0;
}