#include <stdio.h>

int main(int argc, char const *argv[])
{
	int width, length;
	int range;
	int radius; //radius = (range-1) / 2
	double strength[300][300];
	int i, j, a, b;
	// 一開始假設所有的點皆為弱點。  因為要確認該點是非弱點很容易，只要大於任何一個附近的點就好了
	// 反之，要確認該點為弱點就比較困難了，要確認附近所有的點都比他大
	int notWeak[300][300] = { {0} };

	scanf("%d", &width);
	scanf("%d", &length);
	scanf("%d", &range);

	if (width <= 0 || length <= 0 || range % 2 != 1)
		printf("%s\n", "Invalid input!");
	else
	{
		// input the strength
		for (i= 0; i < width; i++)
			for (j= 0; j < length; j++)
				scanf("%lf", &strength[i][j]);

		// start to compare each other 
		radius = (range-1) / 2;	
		for (i = 0; i < width; i++)
			for (j = 0; j < length; j++) 
			{
				// 如果確定不是弱點，就直接跳下一個，加速遊戲進行
				if (notWeak[i][j] == 1)
					continue;
				// compare with his neighbors within "range"
				for (a = i - radius; a <= i + radius; a++)
					for (b = j - radius; b <= j + radius; b++) 
					{
						// // 如果他的對手在邊界之外，直接無視該對手，繼續看下一個!!
						if (a < 0 || a >= width || b < 0 || b >= length)
							continue;
						else if (strength[a][b] > strength[i][j])
						 	notWeak[a][b] = 1;
						else if (strength[a][b] < strength[i][j])
						 	notWeak[i][j] = 1;
						// 如果強度相同，又確認不是同一點，則兩點都不是弱點
						else if (i != a && j != b) 
						 {
						 	notWeak[a][b] = 1;
						 	notWeak[i][j] = 1;
						 }
						 else
						 	continue;
					}
				if (notWeak[i][j] == 0)	
					printf("%d %d\n", i+1, j+1);
			}
	}
	return 0;
}
// 2017-9-5