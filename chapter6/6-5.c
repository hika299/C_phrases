#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int rangeOfStdents = 200, rangeOfCourses = 200;
	int i, j;
	int max, min;
	int numberOfStudents, numberOfCourses;
	int gradeOfStudents[rangeOfStdents][rangeOfCourses]; 

	scanf("%d", &numberOfStudents);
	scanf("%d", &numberOfCourses);

	for (i = 0; i < numberOfStudents; i++)
		for (j = 0; j < numberOfCourses; j++)
			scanf("%d", &gradeOfStudents[i][j]);

	for (i = 0; i < numberOfStudents; i++)
	{
		max = min = gradeOfStudents[i][0];
		for (j = 0; j < numberOfCourses; j++)	 
		{
			if (gradeOfStudents[i][j] > max)
				max = gradeOfStudents[i][j];
			else if (gradeOfStudents[i][j] < min)
				min = gradeOfStudents[i][j];
			else
				continue;
		}
		printf("%d %d\n", max, min);
	}
	for (j = 0; j < numberOfCourses; j++)
	{
		max = min = gradeOfStudents[0][j];
		for (i = 0; i < numberOfStudents; i++)	 
		{
			if (gradeOfStudents[i][j] > max)
				max = gradeOfStudents[i][j];
			else if (gradeOfStudents[i][j] < min)
				min = gradeOfStudents[i][j];
			else
				continue;
		}
		printf("%d %d\n", max, min);		
	}	

	return 0;
}
// 2017-9-2