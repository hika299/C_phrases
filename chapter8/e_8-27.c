#include <stdio.h>

// void printMatrix(int a[][3], int i, int j)
// {
// 	printf("%d\n", a[i][j]);
// 	return;
// }



int main(int argc, char const *argv[])
{
	// int *ptr;
	// int i, j, number;
	int matrix[4][3];
	
	// ptr = matrix[0];
	// printf("%p\n", ptr);
	printf("%p\n", &matrix[0][0]);
	printf("%p\n", &matrix[0]);
	printf("%p\n", matrix[0]);
	printf("%p\n", &matrix);
	printf("%p\n", matrix);

	// printMatrix(matrix, 2, 1);


	return 0;
}