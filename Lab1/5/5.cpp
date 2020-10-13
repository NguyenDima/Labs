#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1251");
	system("cls");

	int a, b;
	printf("Введите любое число: ");
	scanf_s("%d", &a);
	system("cls");
	b = a + 1;
	printf("Вы выбрали число: %d \nКомпьютер выбрал число: %d \nВы проиграли!", a, b);
}
