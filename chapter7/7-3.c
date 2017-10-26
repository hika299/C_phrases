#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int target = 3; 
	// rank1 = rank[1][]
	double rank[target+1][2]; //如果要抓到第三名 0 1 2 3 需要四格
	// rank[1][1] == rank[1][x]
	int distance = 0, id = 1; 
	double x, y, z, tmp_distance, tmp_id;
	double tmp;
	int quantity;
	int i, j, k;

	scanf("%d", &quantity);

	// 先處理好前n個，每輸入一筆 就從最後面往前比較，贏了就"交換""
	for (i = 1; i <= target; i++)
	{
		scanf("%lf", &x);
		scanf("%lf", &y);
		scanf("%lf", &z);
		rank[i][distance] = x * x + y * y + z * z;
		rank[i][id] = i;

		// 只要贏就繼續往前打，直到封頂為止
		for (j = i; j > 1 && (rank[j][distance] < rank[j-1][distance]); j--)
			for (k = 0; k < 1; k++)
			{
				// 資料全部交換 0 1 2 3 4: distance x y z id
				tmp = rank[j][k];
				rank[j][k] = rank[j-1][k];
				rank[j-1][k] = tmp;
			}
	}

	// 再來處理超過n個的輸入，從第n個開始比較，贏了就"取代"
	for (i = target + 1; i <= quantity; i++)
	{
		scanf("%lf", &x);
		scanf("%lf", &y);
		scanf("%lf", &z);
		tmp_distance = x * x + y * y + z * z;
		tmp_id = i;
		if (tmp_distance >= rank[target][distance])
			continue;
		for (j = target; j >= 1 && tmp_distance < rank[j][distance]; j--)
			;
		j = j + 1;

		rank[j][distance] = tmp_distance;
		rank[j][id] = tmp_id;
	}

	printf("%d\n", (int) rank[target][id]);

	return 0;
}
// 2017-9-5 some of the codes are not readable enough
// 2017-9-8 save some memory space: don't save every x, y, z