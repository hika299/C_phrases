#include <stdio.h>

int main(int argc, char const *argv[])
{
	// const int range = 100;
	int width, length;
	// intersection = 1+3+3+1 = 8, T_junction = 3+1+3 = 7, L_junction = 1+3 = 4, blind_alley = 1 or 3, noRoad = 0;
	//		1  
	// 	 3	   3
	// 		1 
	int intersection = 4, T_junction = 3, L_junction = 2, blind_alley = 1; // noRoad = 0; 
	int statistics[5] = {0, 0, 0, 0, 0};
	int roadCounter = 0;
	int cityMap[200][200] = { {0} };
	int i, j;

	scanf("%d", &width);
	scanf("%d", &length);
	for (i = 1; i <= width; i++)
		for (j = 1; j <= length; j++)
			scanf("%d", &cityMap[i][j]);

	for (i = 1; i <= width; i++)
		for (j = 1; j <= length; j++)
		{
			if (cityMap[i][j] == 0)
				continue;
			if (cityMap[i+1][j] == 1)
				roadCounter += 3;
			if (cityMap[i-1][j] == 1)
				roadCounter += 3;
			if (cityMap[i][j+1] == 1)
				roadCounter += 1;
			if (cityMap[i][j-1] == 1)
				roadCounter += 1;

			if (roadCounter == 8)
				statistics[intersection]++;
			else if (roadCounter == 7)
				statistics[T_junction]++;
			else if (roadCounter == 4)
				statistics[L_junction]++;
			else if (roadCounter == 1 || roadCounter == 3)
				statistics[blind_alley]++;
			else
				;

			roadCounter = 0;
		}
	for (i = 4; i >= 1; i--)	
		printf("%d\n", statistics[i]);
		


	return 0;
}
// 2017-9-2
// 2017-9-4, optimization