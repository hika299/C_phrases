#include <stdio.h>

void printArray(int a[2], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return;
}



int main(int argc, char const *argv[])
{
	int i;
	int array[5];
	for (i = 0; i < 5; i++)
		array[i] = i;
	printArray(array, 5);
	return 0;
}