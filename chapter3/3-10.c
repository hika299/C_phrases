#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d, e;
	int A, B, C;

	int surface;
	int volume;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	A = a - 2*e;
	B = b - 2*e;
	C = c - 2*e;
	
	// surface = 2 * (a*b + b*c + c*a) + 2 * (2* (A + B + B + C + C + A)) * d; 
	surface = 2 * (a*b + b*c + c*a) + 8 * (A + B + C ) * d; 
	volume = a * b * c - 2 * ((A*B + B*C + C*A) * d);

	printf("%d\n", surface);
	printf("%d\n", volume);

	return 0;
}