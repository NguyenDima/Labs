#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	system("chcp 1251");
	system("cls");

	double x, y;
	while (true)
	{
		printf("������� ���������� �: ");
		scanf("%lf", &x);
		printf("������� ���������� �: ");
		scanf("%lf", &y);
		if ((x <= 1 && x >= -1 && y <= 1 && y >= 0) || (x * x + y * y <= 1))
		{
			printf("����� �������� � �������\n");
		}
		else
		{
			printf("����� �� ������ � �������\n");
		}
		printf("��� ����������� ������� ����� �������\n");
		_getch();
	}

	return 0;
}