#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int i;
	int value = 1;
	int counter = 0;

	scanf("%d", &n);
	scanf("%d", &i);
	
	// value = n^i 
	if (i == 0)
	{
		if (n == 0)
			printf("%s\n", "0^0 is not defined!");
		else
			printf("%d\n", 1);
	}
	else
	{
		for (counter = 0; counter < i; counter++)
			value *= n;
		printf("%d\n", value);
	}

	
		
	
	
	return 0;
}