#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (i < j)
	{
		printf("%d\n", i);
		printf("%d\n", j);	
	}
	else
	{
		printf("%d\n", j);
		printf("%d\n", i);	
	}
	
	return 0;
}