#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	short n;
	double x;
	double y = 0;
	short h;
	for (n = 0; n < 5; n++)
	{
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");
		for (x = 0; x < 4; x += 0.25)
		{
			if (x > 0 && x <= 2)
			{
				y = 2 + sqrt(1 - (x - 1) * (x - 1));
			}
			else if (x > 2 && x <= 4)
			{
				y = 0 - sqrt(1 - (x - 3) * (x - 3));
			}
			printf("| %5.2lf | %10.7lf | ", x + n * 4, y);
			h = (y + 3) * 10;
			if (y - 1 - h * 10 > 0.5) h++;
			for (; h > 0; h--) printf(" ");
			printf("*\n");
		}
		printf("Нажмите клавишу Enter...");
		getchar();
	}
	return 0;
}