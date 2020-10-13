#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	double a, b, c;
	double s, p;
	printf("\n Введите сторону а:");
	scanf_s("%lf", &a);
	system("cls");
	printf("\n Введите сторону b:");
	scanf_s("%lf", &b);
	system("cls");
	printf("\n Введите сторону c:");
	scanf_s("%lf", &c);
	system("cls");
	p = (a + b + c) / 2;
	printf("p = %lf \n", p);
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("s = %lf", s);

}