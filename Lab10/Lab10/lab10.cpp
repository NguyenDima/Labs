#include <iostream>
#include<ctime>
using namespace std;
#define S (50)

int Array(int arr[S], int N, int M)
{
	int arr2[50][50]{};
	for (int i = 0, k = 0; i < N; ++i)
		for (int  j = 0; j < M; ++j)
			arr2[i][j] = arr[k++];
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	int d;
	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < N; j++)
		{
			d = rand() % 10;
			cout << "Multiplier: " << d;
			cout << endl;
			for (int l = 0; l < M; l++)
			{
				int res = arr2[j][l] * d;
				cout << "Result: " << res;
				cout << endl;
			}

		}
	}
	
	
	return 0;
}
	
int main()
{
	srand(time(0));
	int N, M;
	int arr[S];
	cout << "Enter the number of row of the array: ";
	cin >> N;
	cout << "Enter the number of column of the array: ";
	cin >> M;
	int size = M * N;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Array(arr, N, M);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
