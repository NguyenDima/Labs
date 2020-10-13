#include <stdio.h>
#include <stdlib.h>


int main()
{
	system("chcp 1251");
	system("cls");
	//С дополнительной переменной
	int c, d, e;
	c = 1;
	d = 3;
	printf("Было: %d, %d \n", c, d);
	e = c;
	c = d;
	d = e;
	printf("Стало: %d, %d ", c, d);
	printf("\n\n\n");
	//Без дополнительной переменной
	int a = 8;
	int b = 1;
	printf("Было: %d, %d \n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Стало: %d, %d \n", a, b);

}
