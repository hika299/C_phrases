#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year;
	int x;

	scanf("%d", &year);
	x = !( ((year%100 == 0) && (year%400 != 0))  || (year % 4 != 0) );
	printf("%d\n", x);
	return 0;
}