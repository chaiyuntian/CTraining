#include "stdio.h"
#include "math.h"

double vector_length(double x, double y, double z)
{
	return sqrt(x*x + y*y + z*z);
}

double calcDistance(int n)
{
	double sum = 0.;
	int i;
	for (i = 1; i < n+1; i++)
	{
		sum += vector_length(1.,(double)i,0.);
	}

	return sum;
}

double calcOffset(int n)
{
	double x_sum = 0., y_sum = 0.;
	int i;
	for (i = 1; i < n+1; i++)
	{
		x_sum += 1.;
		y_sum += (double)i;
	}

	return vector_length(x_sum, y_sum, 0.);
}

int main()
{
	double distance = calcDistance(100);
	double Offset = calcOffset(100);
	printf("distance:%lf, offset:%lf\n", distance,Offset);
	return 0;
}


