#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x_1, y_1;
	int x_2, y_2;
	int x_3, y_3;
	int d_1, d_2, d_3;
	int max;

	scanf("%d", &x_1);
	scanf("%d", &y_1);
	scanf("%d", &x_2);
	scanf("%d", &y_2);
	scanf("%d", &x_3);
	scanf("%d", &y_3);

	d_1 = x_1*x_1 + y_1*y_1;
	d_2 = x_2*x_2 + y_2*y_2;
	d_3 = x_3*x_3 + y_3*y_3;

	max = d_1;
	if (d_2 > max)
		max = d_2;
	if (d_3 > max)
		max = d_3;

	if (max == d_1)
		printf("%d\n%d\n", x_1, y_1);
	else if(max == d_2)
		printf("%d\n%d\n", x_2, y_2);
	else
		printf("%d\n%d\n", x_3, y_3);

	return 0;
}