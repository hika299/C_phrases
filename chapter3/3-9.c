#include <stdio.h>

int main(int argc, char const *argv[])
{
	int volume;
	int surface;
	int length, width, height;

	scanf("%d", &length);
	scanf("%d", &width);
	scanf("%d", &height);

	surface = 2*(length*width + width*height + height*length);
	volume = length * width * height;

	printf("%d\n", surface);
	printf("%d\n", volume);

	return 0;
}