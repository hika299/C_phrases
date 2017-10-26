#include <stdio.h>

int main(int argc, char const *argv[])
{
	int TicTacToe[9] = {0};
	int position;
	int numberOfsteps;
	int winnerAppear = 0;
	int circle = 1; // cross = -1;
	int player;

	player = circle;
	for (numberOfsteps = 1; numberOfsteps <= 9 && winnerAppear == 0; numberOfsteps++)
	{
		scanf("%d", &position);
		TicTacToe[position] = player;
		// check whether there is a winner
		if (numberOfsteps >= 5)
		{
			if ( (TicTacToe[1] == player && TicTacToe[2] == player && TicTacToe[3] == player) || (TicTacToe[4] == player && TicTacToe[5] == player && TicTacToe[6] == player) || (TicTacToe[7] == player && TicTacToe[8] == player && TicTacToe[9] == player) )
				winnerAppear = player;
			else if ( (TicTacToe[1] == player && TicTacToe[4] == player && TicTacToe[7] == player) || (TicTacToe[2] == player && TicTacToe[5] == player && TicTacToe[8] == player) || (TicTacToe[3] == player && TicTacToe[6] == player && TicTacToe[9] == player) )
				winnerAppear = player;
			else if ( (TicTacToe[1] == player && TicTacToe[5] == player && TicTacToe[9] == player) || (TicTacToe[3] == player && TicTacToe[5] == player && TicTacToe[7] == player) )
				winnerAppear = player;
			else
				;
		}
		// exchange player
		player = player * -1;
	}
	if (winnerAppear == 0)
		printf("%d\n", 0);
	else
		printf("%d\n", position);

	return 0;
}
// 2017-9-3