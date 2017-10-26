#include <stdio.h>

int main(int argc, char const *argv[])
{
	int area;
	int perimeter;
	int x_1, y_1, x_2, y_2;

	scanf("%d", &x_1);
	scanf("%d", &y_1);
	scanf("%d", &x_2);
	scanf("%d", &y_2);

	area = (x_2 - x_1) * (y_2 - y_1);
	perimeter = 2 * ((x_2 - x_1) + (y_2 - y_1));
	printf("%d\n", area);
	printf("%d\n", perimeter);

	return 0;
}