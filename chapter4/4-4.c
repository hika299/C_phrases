#include <stdio.h>

int main(int argc, char const *argv[])
{
	int perimeter;
	int x_1, y_1, x_2, y_2;
	int d_x, d_y;
	scanf("%d", &x_1);
	scanf("%d", &y_1);
	scanf("%d", &x_2);
	scanf("%d", &y_2);

	d_x = x_1 - x_2;
	d_x = (d_x > 0)? d_x : -d_x;
	d_y = y_1 - y_2;
	d_y = (d_y > 0)? d_y : -d_y;
	perimeter = 2*(d_x + d_y);

	printf("%d\n", perimeter);

	return 0;
}