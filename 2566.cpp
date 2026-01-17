#include <iostream>
using namespace std;

int main() {

	int arr[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	int max_num = arr[0][0];
	int max_row = 0;
	int max_column = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max_num < arr[i][j])
			{
				max_num = arr[i][j];
				max_row = i;
				max_column = j;
			}
		}
	}

	cout << max_num << '\n' << max_row + 1 << ' ' << max_column + 1;






	return 0;
}