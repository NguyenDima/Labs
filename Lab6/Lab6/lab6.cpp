#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	long n;
	double dbln;
	double sum = 0;
	double term;
	const double lim = 0.000001;
	long k2 = 1;
	short k1 = 1;
	for (n = 0; ; n++, k1 = -k1, k2 *= 2)
	{
		dbln = n;
		term = k1 / (dbln * dbln + k2);
		if (fabs(term) >= lim)
		{
			sum += term;
		}
		else break;
		if (n == 9) 
		{
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
		}
	}
	printf("Полная сумма членов ряда = %10.7lf\n", sum);
	return 0;
}