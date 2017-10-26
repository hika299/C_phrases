#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int rangeOfStdents = 200;
	const int rangeOfCourses = 200;
	int i, j;
	int sumOfGrades = 0;
	int numberOfStudents, numberOfCourses;
	int gradeOfStudents[rangeOfStdents][rangeOfCourses]; 

	scanf("%d", &numberOfStudents);
	scanf("%d", &numberOfCourses);

	for (i = 0; i < numberOfStudents; i++)
		for (j = 0; j < numberOfCourses; j++)
			scanf("%d", &gradeOfStudents[i][j]);

	for (i = 0; i < numberOfStudents; i++)
	{
		for (j = 0; j < numberOfCourses; j++)	 
			sumOfGrades += gradeOfStudents[i][j];
		printf("%d\n", sumOfGrades / numberOfCourses);
		sumOfGrades = 0;
	}
	for (j = 0; j < numberOfCourses; j++)
	{
		for (i = 0; i < numberOfStudents; i++)
			sumOfGrades += gradeOfStudents[i][j];
		printf("%d\n", sumOfGrades / numberOfStudents);
		sumOfGrades = 0;		
	}	

	return 0;
}
// 2017-9-2