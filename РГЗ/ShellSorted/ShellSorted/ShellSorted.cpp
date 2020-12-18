#include <iostream>
#include <chrono>
using namespace std;

int shellSort(int arr[], int size)

{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
	for (int step = size / 2; step > 0; step /= 2)
	{
		for (int i = step; i < size; i++)
		{
			int temp = arr[i];
			int j;
			for (j = i; j >= step && arr[j - step] > temp; j -= step)
			{
				arr[j] = arr[j - step];
			}
			arr[j] = temp;
		}
	}

	cout << endl;


	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}
void Reverse(int arr[], int size)
{
	auto start = std::chrono::high_resolution_clock::now();
	cout << "Shell sorted: ";
	shellSort(arr, size);
	cout << "Reversed: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	float d = duration.count();
	printf("%f", d);
	cout << endl;
}

void Sorted(int arr[], int size)
{
	auto start = std::chrono::high_resolution_clock::now();
	cout << "Sorted with ShellSort: ";
	shellSort(arr, size);
	
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	float d = duration.count();
	printf("%f", d);
	cout << endl;
}
int main()
{
	srand(time(NULL));

	int SIZE;

	for (int n = 0; n < 9; n++)
	{
		cout << "Enter the size of the array: ";
		cin >> SIZE;
		int* arr = new int[SIZE];

		Sorted(arr, SIZE);
		cout << endl;

		Reverse(arr, SIZE);
		cout << endl;

		auto start = std::chrono::high_resolution_clock::now();
		cout << "Shell sorted: ";
		shellSort(arr, SIZE);
		cout << "Random sorted array: ";
		for (int i = 0; i < SIZE; i++)
		{
			swap(arr[i], arr[rand() % SIZE]);
		}

		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		float d = duration.count();
		printf("%f", d);
		cout << endl;
	}

}