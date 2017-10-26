#include <stdio.h>

int main(int argc, char const *argv[])
{
	// int trap_1_x = 0, trap_1_y = 0;
	// int trap_2_x = 0, trap_2_y = 0;
	// int trap_3_x = 0, trap_3_y = 0;
	int x = 0, y = 1;
	int trap[3][2] = { {0} };
	int car_x = 0, car_y = 0;
	int i, j;
	int moveDirection;
	int pathLengthOfTrap[3];
	int pathLengthOfCar = 0;
	int isCaught = 0;
	int distance;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &pathLengthOfTrap[i]);
		for (j = 0; j < pathLengthOfTrap[i]; j++)
		{
			scanf("%d", &moveDirection);
			if (moveDirection == 0)
				trap[i][y]++;
			else if (moveDirection == 1)
			{
				trap[i][x]++;
				trap[i][y]++;
			}
			else if (moveDirection == 2)
				trap[i][x]++;
			else if (moveDirection == 3)
				trap[i][y]--;
			else if (moveDirection == 4)
			{
				trap[i][x]--;
				trap[i][y]--;
			}
			else if (moveDirection == 5)
				trap[i][x]--;
			else
			{
				printf("%s\n", "Invalid move direction! Please input number (0~5) again");
				i--;
			}
		}
	}
	
	scanf("%d", &pathLengthOfCar);
	for (i = 0; i < pathLengthOfCar && isCaught == 0; i++)
	{
		scanf("%d", &moveDirection);
		if (moveDirection == 0)
			car_y++;
		else if (moveDirection == 1)
		{
			car_x++;
			car_y++;
		}
		else if (moveDirection == 2)
			car_x++;
		else if (moveDirection == 3)
			car_y--;
		else if (moveDirection == 4)
		{
			car_x--;
			car_y--;
		}
		else if (moveDirection == 5)
			car_x--;
		else
		{
			printf("%s\n", "Invalid move direction! Please input number (0~5) again");
			i--;
		}
		for (i = 0; i < 3 && isCaught == 0; i++)
			if (car_x == trap[i][x] && car_y == trap[i][y])
				isCaught = 1;			
	}
	car_x = (car_x > 0)? car_x : -car_x;
	car_y = (car_y > 0)? car_y : -car_y;
	distance = (car_y > car_x)? car_y : car_x; //distance = max{x, y}
	printf("%d\n", distance);

	return 0;
}