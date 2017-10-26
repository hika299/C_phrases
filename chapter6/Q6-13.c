#include <stdio.h>

int main(int argc, char const *argv[])
{
	int coordinateToNumber[25][25][25]; // coordinateToNumber[x][y][z] = number
	int numberToCoordinate[25][3]; // numberToCoordinate[number][0] = x, numberToCoordinate[number][1] = y, numberToCoordinate[number][2] = z
	int n;
	int x, y, z;
	int number;
	int i, j;
	int isBingo == 0;

	scanf("%d", &n);
	for (x = 0; x < n; x++)
		for (y = 0; y < n; y++)
			for (z = 0; z < n; z++)
			{
				scanf("%d", &number);
				coordinateToNumber[x][y][z] = number;
				numberToCoordinate[number][0] = x;
				numberToCoordinate[number][1] = y;
				numberToCoordinate[number][2] = x;
			}

	for (i = 0; i < n * n * n && isBingo == 0; i++)
	{
		scanf("%d", &number);
		x = numberToCoordinate[number][0];
		y = numberToCoordinate[number][1];
		z = numberToCoordinate[number][2];
		coordinateToNumber[x][y][z] = 1;

		isBingo = 1;
		// if some is not 1, isBingo remain 0, otherwise, isBingo become 1
		for (j = 0; j < n && isBingo = 1; j++)
			if (coordinateToNumber[j][y][z] != 1)
				isBingo = 0;
			else
				isBingo == 1;				

		for (j = 0; j < n && isBingo == 0; j++)
			if (coordinateToNumber[x][j][z] != 1)
				isBingo = 0;	

		for (j = 0; j < n && isBingo == 0; j++)
			if (coordinateToNumber[x][y][j] != 1)
				isBingo = 0;				
		for (j = 0; )
	}

	printf("%d\n", number);

	return 0;
}