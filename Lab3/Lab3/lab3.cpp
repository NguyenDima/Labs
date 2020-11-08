#include <stdio.h>
#include <math.h>


int main()
{
	double x = 4.1, y = 3.4;
	double a = 5.4, b = 3.3;
	double t1, t2;
	double ax;
	//b!=0, x!=0, y!=0, a!=0, y/x > 0

	//printf("¬ведите x, y: ");
	//scanf("%lf %lf", &x, &y);

	ax = a * x;
	t1 = (pow(a,2) * log10(y / x) + (2 * ax) / y + pow(y,2) / (2 * pow(x,2)) / pow(b,3));

	ax = pow(sin(ax),2) - 1;
	t2 = 1 / (2 * sqrt(2) * a) + (3 * ax) / ax;

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);


}