#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int x, y, z;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	z = a - c;
	y = b / 2 - 4*z - c;
	x = c - y;

	if (z < 0)
		printf("%d\n", 0);
	else if (b % 2 != 0)
		printf("%d\n", 0);
	else if (y < 0)
		printf("%d\n", 0);
	else if (x < 0)
		printf("%d\n", 0);
	else
	{
		printf("%d\n", x);
		printf("%d\n", y);
		printf("%d\n", z);
	}
	
		
		
	
	
		
		
	
	
		
	
	
	return 0;
}