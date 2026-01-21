#include <iostream>
using namespace std;
#include <vector>
int main() {

	int N, M;
	cin >> N >> M;

	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		int var;
		cin >> var;
		vec.push_back(var);
	}

	int max = 0;

	// N개 중에서 순서 고려 없이 3개 뽑기
	for (int i = 0; i < N; i++)  // i < N-2 로 써도 무관
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{	
				int sum = vec[i] + vec[j] + vec[k];
				if (max < sum && sum <= M)
				{
					max = sum;
				}
			}
		}
	}

	cout << max;

	return 0;
}