#include <iostream>
#include <chrono>
#include <algorithm>
const int RUN = 64;
using namespace std;

int insertionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
	for (int i = 1; i < size; i++) 
	{
		int e = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > e) 
		{
			arr[j + 1] = arr[j];
			arr[j] = e;
			j--;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return arr[size];
}

int timSort(int arr[], int size)
{


	for (int i = 0; i < size; i += RUN)
	{
		insertionSort(arr, size);
	}

	return 0;
}

void Reverse(int arr[], int size)
{
	auto start = std::chrono::high_resolution_clock::now();
	cout << "Sorted: ";
	timSort(arr, size);
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
	cout << "Sorted: ";
	timSort(arr, size);
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
		cout << "Enter the size of array: ";
		cin >> SIZE;
		int* arr = new int[SIZE];

		Sorted(arr, SIZE);
		cout << endl;

		Reverse(arr, SIZE);
		cout << endl;

		auto start = std::chrono::high_resolution_clock::now();
		cout << "Sorted: ";
		timSort(arr, SIZE);
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