#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int a[9][9];
	
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			a[i][j] = rand() % 99;
		}
	}
	cout << "Array before" << endl;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			cout << a[i][j] << "\t";
		cout << endl << endl;
	}
	cout << endl;
	cout << "Array after" << endl;
	for (i = 0; i < 9; i++)
	{
		int k = (i < 9 / 2) ? i : 9 - i - 1;
		for (j = 0; j < 9; j++)
			cout << a[k][j] << "\t";
		cout << endl << endl;
	}

}