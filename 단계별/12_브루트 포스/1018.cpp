#include <iostream>
using namespace std;
#include <vector>

int main() {

	int n, m;
	cin >> n >> m;
	// vector<vector<char>> vec; 이런식으로 쓰면 size = 0이므로 접근불가능
	vector<vector<char>> vec(n, vector<char>(m)); // 크기 n x m, 기본값으로 '\0'이 들어가 있음.

	// 배열 초기화
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> vec[i][j];
		}
	}
	
	// 찾아야 할 최솟값
	int min = 64;

	for (int i = 0; i <= n - 8; i++)  // <<<오류 원인>>> 범위 실수
	{
		for (int j = 0; j <= m - 8; j++)
		{
			// [i, j] 기준으로 탐색 시작
			int wbw = 0;
			int bwb = 0;
			int which_is_min;

			// (i, j)가 W로 시작
			for (int row = i; row < i + 8; row++)
			{
				for (int col = j; col < j + 8; col++)
				{
					// 잘못 배치된 애 숫자 세기
					if ((row + col) % 2 == 0) // 짝수일 떄
					{
						if (vec[row][col] == 'W')
							continue;
						else
							wbw += 1;
					}
					else // 홀수일 때
					{
						if (vec[row][col] == 'B')
							continue;
						else 
							wbw += 1;
					}
				}
			}

			// (i, j)가 B로 시작
			for (int row = i; row < i + 8; row++)
			{
				for (int col = j; col < j + 8; col++)
				{
					// 잘못 배치된 애 숫자 세기
					if ((row + col) % 2 == 0) // 짝수일 떄
					{
						if (vec[row][col] == 'B')
							continue;
						else
							bwb += 1;
					}
					else // 홀수일 때
					{
						if (vec[row][col] == 'W')
							continue;
						else 
							bwb += 1;
					}
				}
			}

			which_is_min = (wbw > bwb) ? bwb : wbw;

			if (min > which_is_min)
				min = which_is_min;
			
		}
	}

	cout << min;

	return 0;
}