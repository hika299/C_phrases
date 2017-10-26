#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int rangeOfRows = 200, rangeOfColumns = 200;
	int i, j;
	// int min;
	int numberOfRows, numberOfColumns;
	int elementsOfmatrix[rangeOfRows][rangeOfColumns]; 

	scanf("%d", &numberOfRows);
	scanf("%d", &numberOfColumns);

	for (i = 0; i < numberOfRows; i++)
		for (j = 0; j < numberOfColumns; j++)
			scanf("%d", &elementsOfmatrix[i][j]);

	// min = elementsOfmatrix[1][1];
	// for (i = 1; i <= numberOfRows; i++)
	// 	for (j = 1; j <= numberOfColumns; j++)
	// 		if (elementsOfmatrix[i][j] < min)
	// 			min = elementsOfmatrix[i][j];
	// min = min - 1;

	// for (i = 0; i <= numberOfRows + 1; i++)
	// 	for (j = 0; j <= numberOfColumns + 1; j++)
	// 		if (i == 0 || i == numberOfRows+1 || j == 0 || j == numberOfColumns+1 )
	// 			elementsOfmatrix[i][j] = min;

	for (i = 0; i < numberOfRows; i++)
		for (j = 0; j < numberOfColumns; j++)
		{
			// 如果他的對手在邊界之外，直接判他贏就好了!!
			if ( 
				 (elementsOfmatrix[i][j] > elementsOfmatrix[i+1][j] || i+1 >= numberOfRows) &&
			     (elementsOfmatrix[i][j] > elementsOfmatrix[i-1][j] || i-1 < 0) && 
				 (elementsOfmatrix[i][j] > elementsOfmatrix[i][j+1] || j+1 >= numberOfColumns) && 
				 (elementsOfmatrix[i][j] > elementsOfmatrix[i][j-1] || j-1 < 0) 
				)
				printf("%d\n", elementsOfmatrix[i][j]);	
		}
		

	return 0;
}
// 2017-9-02 not good enough
