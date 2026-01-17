#include <iostream>
using namespace std;

int main() {

	int N; 
	cin >> N;

	bool arr[101][101] = { false }; //  0 행과 열은 사용 X


	// 좌표평면에서 bool type으로 색칠을 한다고 생각.
	for (int k = 0; k < N; k++)
	{
		int row_start, col_start;
		cin >> row_start >> col_start;

		for (int i = row_start; i < row_start + 10; i++)
		{
			for (int j = col_start; j < col_start + 10; j++)
			{
				arr[i][j] = true;
			}
		}
	}

	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			if (arr[i][j] == true)
			count++;
		}
	}

	cout << count;

	return 0;
}