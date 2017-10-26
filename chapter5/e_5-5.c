#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	int r;

	scanf("%d", &a);
	scanf("%d", &b);

	// a / b = q...r
	r = a % b;
	while (r != 0)
	{
		// step2: b / r ... ?  b > r    => a' / b' ... r'  
		a = b;
		b = r;
		// step1: a / b ... r    a > b
		r = a % b;
	}
	printf("%d\n", b);
	
	return 0;
}