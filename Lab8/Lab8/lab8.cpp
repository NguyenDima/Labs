#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 200;
	int i, min, max, aver;
	int arr[SIZE];
	int k = 0;
	int sum = 0;
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 200 - 100;
	}
	printf("Массив:\n");
	for (i = 0; i < SIZE; printf("%4d  ", arr[i++]));
	putchar('\n');
	putchar('\n');
    //нахождение среднего
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] >= 0)
		{
			sum += arr[i];
			k++;
		}
		
	}
	aver = sum / k;
	cout << endl << "Среднее: " << aver << endl;
	//макс и мин
	min = 100;
	max = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
	}
	cout << "Макс: " << max << endl;
	cout << "Мин: " << min << endl << endl;
	//замена
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] == min)
		{
			arr[i] = aver;
		}
		if (arr[i] == max)
		{
			arr[i] = aver;
		}
	}

	printf("Результат:\n");
	for (i = 0; i < SIZE; printf("%3d  ", arr[i++]));
	putchar('\n');
	return 0;
}