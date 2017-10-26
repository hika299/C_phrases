#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, y;
	int x1, y1,   x2, y2;
	int dx1, dy1,  dx2, dy2;
	int t;
	int tmp;
	int clock = 1;

	// Input the the range of the box
	scanf("%d", &x);
	scanf("%d", &y);
	// Input the original positions of two balls
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);
	// Input the original velocity of the two balls
	scanf("%d", &dx1);
	scanf("%d", &dy1);
	scanf("%d", &dx2);
	scanf("%d", &dy2);
	// Input the total time we want to stimulate
	scanf("%d", &t);

	// border 0~x, 0~y
	while (clock <= t)
	{
		// move
		x1 += dx1;
		y1 += dy1;
		x2 += dx2;
		y2 += dy2;

		// check
		// collision each other?
		if (x1 == x2 && y1 == y2)
		{
			// dx of the two balls exchange
			tmp = dx1;
			dx1 = dx2;
			dx2 = tmp;
			// dy of the two balls exchange
			tmp = dy1;
			dy1 = dy2;
			dy2 = tmp;
		}

		// ball_1 coliision with walls?
		if (x1 == 0 || x1 == x)
			dx1 = -dx1;
		if (y1 == 0 || y1 == y)
			dy1 = -dy1;
		// ball_2 coliision with walls?
		if (x2 == 0 || x2 == x)
			dx2 = -dx2;
		if (y2 == 0 || y2 == y)
			dy2 = -dy2;

		clock++;
	}
	printf("%d\n", x1);
	printf("%d\n", y1);
	printf("%d\n", x2);
	printf("%d\n", y2);

	return 0;
}
// 2017-8-30