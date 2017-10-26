#include <stdio.h>

int main(int argc, char const *argv[])
{
	//  6 End points of 3 line segments in 2D plane 
	int x_a_1, y_a_1,  x_a_2, y_a_2;
	int x_b_1, y_b_1,  x_b_2, y_b_2;
	int x_c_1, y_c_1,  x_c_2, y_c_2;

	// 3 vector from each of the line segments
	int v_a_x, v_a_y;
	int v_b_x, v_b_y;
	int v_c_x, v_c_y;

	// Combine vectorA and vectorB to form a Vector, and there is four possible ways to combine them.
	int V_x_1, V_y_1;
	int V_x_2, V_y_2;
	int V_x_3, V_y_3;
	int V_x_4, V_y_4;

	// input the value of x and y of 6 end points of 3 line segments
	scanf("%d", &x_a_1);
	scanf("%d", &y_a_1);
	scanf("%d", &x_a_2);
	scanf("%d", &y_a_2);

	scanf("%d", &x_b_1);
	scanf("%d", &y_b_1);
	scanf("%d", &x_b_2);
	scanf("%d", &y_b_2);

	scanf("%d", &x_c_1);
	scanf("%d", &y_c_1);
	scanf("%d", &x_c_2);
	scanf("%d", &y_c_2);

	// Generate 3 vector from each of the line segments
	v_a_x = x_a_2 - x_a_1;
	v_a_y = y_a_2 - y_a_1;

	v_b_x = x_b_2 - x_b_1;
	v_b_y = y_b_2 - y_b_1;	

	v_c_x = x_c_2 - x_c_1;
	v_c_y = y_c_2 - y_c_1;

	// Combine lineA and lineB to generate a Vector, and there are four possible ways to combine them. 
	V_x_1 = v_a_x + v_b_x;
	V_y_1 = v_a_y + v_b_y;
	V_x_2 = v_a_x - v_b_x;
	V_y_2 = v_a_y - v_b_y;
	V_x_3 = -V_x_1;
	V_y_3 = -V_y_1;
	V_x_4 = -V_x_2;
	V_y_4 = -V_y_2;

	// To check whether vectorC is equal to one of the four possible Vecors combined by vectorA and vectorB 
	if ( ( (v_c_x == V_x_1) && (v_c_y == V_y_1) ) || ( (v_c_x == V_x_2) && (v_c_y == V_y_2) ) ) 
		printf("%d\n", 1);
	else if	( ( (v_c_x == V_x_3) && (v_c_y == V_y_3) ) || ( (v_c_x == V_x_4) && (v_c_y == V_y_4) ) )
		printf("%d\n", 1);	
	else
		printf("%d\n", 0);	

	return 0;

}
