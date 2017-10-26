#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j, k;
	int max;
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	max = i;
	if (j > max)
		max = j;
	if (k > i)
		max = k;
	printf("%d\n", max);
	return 0;
}