#include <stdio.h>

int main(int argc, char const *argv[])
{
	int area;
	int x_1, y_1, x_2, y_2;

	scanf("%d", &x_1);
	scanf("%d", &y_1);
	scanf("%d", &x_2);
	scanf("%d", &y_2);

	area = (x_2 - x_1) * (y_2 - y_1);
	area = (area > 0)? area : -area;
	printf("%d\n", area);

	return 0;
}