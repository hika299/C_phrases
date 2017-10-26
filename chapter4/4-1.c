#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b, c;
	int min;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	printf("%d\n", min);
	return 0;
}