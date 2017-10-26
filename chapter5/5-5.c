#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;

	const int d_up = 5, d_right = 6, d_down = 7, d_left = 8;
	int direction = d_up;

	const int c_left = 1, c_right = 2, c_stop = 3;
	int command = 0;

	int t_1 = 0, t_2 = 0,  distance = 0;

	while (command != c_stop)
	{
		// Input the time of the new command 
		scanf("%d", &t_2);
		// Check whether the time is valid
		if (t_2 <= t_1)
		{
			printf("%s %d %s\n", "Invalid time! Please enter a time larger than", t_1, "!");
			continue;
		}

		else
		{
			// Input the new command
			scanf("%d", &command);
			// Check whether the new command is valid 
			if ( (command != c_right) && (command != c_left) && (command != c_stop) )
			{
				printf("%s\n", "Invalid command! Please enter a valid command (1 / 2 / 3) to continue.");
				continue;
			}
			else
			{
				// Calculate the distance the car went during t_1 ~ t_2
				distance = (t_2 - t_1) * 10;
				t_1 = t_2;

				// Acordding to the old direction to determine the change of the x, y during the time interval 
				if (direction == d_up)
				{
					y += distance;
					
					// According to the new command to chage the direction
					if(command == c_stop)
						continue;
					else if (command == c_right)
						direction = d_right;
					else if (command == c_left)
						direction = d_left;
					else
						printf("%s\n", "WHAT???");
				}
				else if (direction == d_right)
				{
					x += distance;
					if(command == c_stop)
						continue;
					else if (command == c_right)
						direction = d_down;
					else if (command == c_left)
						direction = d_up;
					else
						printf("%s\n", "WHAT???");
				}
				else if (direction == d_down)
				{
					y -= distance;
					if(command == c_stop)
						continue;
					else if (command == c_right)
						direction = d_left;
					else if (command == c_left)
						direction = d_right;
					else
						printf("%s\n", "WHAT???");
				}
				else if (direction == d_left)
				{
					x -= distance;
					if(command == c_stop)
						continue;
					else if (command == c_right)
						direction = d_up;
					else if (command == c_left)
						direction = d_down;
					else
						printf("%s\n", "WHAT???");
				}
				else
					printf("%s\n", "WHAT???");
			}	
		}
	}

	printf("%d\n", x);
	printf("%d\n", y);

	return 0;
}
// 2017-8-30