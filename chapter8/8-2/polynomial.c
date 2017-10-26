double polynomial (double x, double coef[], int n)
{
	int i;
	double ValueOfxpower = 1;
	double sum = 0;
	sum += coef[0];
	for (i = 1; i <= n; i++)
	{
		ValueOfxpower *= x;
		sum += coef[i] * ValueOfxpower;
	}
	return sum;
}