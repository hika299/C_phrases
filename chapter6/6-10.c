#include <stdio.h>

int main(int argc, char const *argv[])
{
	//       13 12 11 10  9  
	//       a[tr][4]  a[tr][3]  a[tr][2]  a[tr][1]  a[tr][0]
	//       _______ _______ _______ _______ _______ 
	// 14   |                                       |  a[0][]       8
	// 15   |                                       |  a[1][]        7
	// 16   |                                       |  a[2][]         6 
	// 17   |_______ _______ _______ _______ _______|  a[3][]         5
	// 
	//       a[][4]  a[][3]  a[][2]  a[][1]  a[][0]
	//         0   1  2  3  4


	int top_right = 20,  bottom_left = 40;
	int i, j, tmp = 0;
	int width, length;
	int number;
	int viewFromWindows[50][50];
	int room[50][50];

	scanf("%d", &width);
	scanf("%d", &length);

	// initialize viewFromWindows
	number = 0;		
	for (i = width - 1; i >= 0; i--)
	{
		viewFromWindows[top_right][i] = number;
		number++;
	}	
	for (i = length - 1; i >= 0; i--)
	{
		viewFromWindows[i][bottom_left] = number;
		number++;
	}
	for (i = 0; i < width; i++)
	{
		viewFromWindows[bottom_left][i] = number;
		number++;
	}
	for (i = 0; i < length; i++)
	{
		viewFromWindows[i][top_right] = number;
		number++;
	}

	
	for (i = 0; i < length; i++)
		for (j = width - 1; j >= 0; j--)
			scanf("%d", &room[i][j]);

	// deal with the top and the right viewFromWindows, swap them
	// direction: ^>
	for (i = length - 1; i >= 0; i--)
		for (j = width - 1; j >= 0; j--)
		{
			if (room[i][j] == 0)
				continue;
			else
			{
				tmp = viewFromWindows[i][top_right];
				viewFromWindows[i][top_right] = viewFromWindows[top_right][j];
				viewFromWindows[top_right][j] = tmp;\
			}
		}

	// deal with the bottom and the left viewFromWindows, swap them
	// direction: <v
	for (i = 0; i < length; i++)
		for (j = 0; j < width; j++)
		{
			if (room[i][j] == 0)
				continue;
			else
			{
				tmp = viewFromWindows[i][bottom_left];
				viewFromWindows[i][bottom_left] = viewFromWindows[bottom_left][j];
				viewFromWindows[bottom_left][j] = tmp;
			}
		}	
	// print the result from 0 ~ ?
	for (i = width - 1; i >= 0; i--)
		printf("%d\n", viewFromWindows[bottom_left][i]);
	for (i = length - 1; i >= 0; i--)
		printf("%d\n", viewFromWindows[i][top_right]);
	for (i = 0; i < width; i++)
		printf("%d\n", viewFromWindows[top_right][i]);
	for (i = 0; i < length; i++)
		printf("%d\n", viewFromWindows[i][bottom_left]);

	return 0;
}
// 2017-9-2
// 2017-9-3