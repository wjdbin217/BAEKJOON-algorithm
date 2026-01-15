#include <iostream>
using namespace std;
#include <vector>

int main() {

	int N, M;
	cin >> N >> M;

	// vector로 2차월 배열 생성
	std::vector<std::vector<int>> matrix_1(100, std::vector<int>(100, 0));

	std::vector<std::vector<int>> matrix_2(100, std::vector<int>(100, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> matrix_1[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> matrix_2[i][j];
		}
	}

		for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix_1[i][j] + matrix_2[i][j] << ' ';
		}
		cout << "\n";
	}
	{}

	return 0;
}