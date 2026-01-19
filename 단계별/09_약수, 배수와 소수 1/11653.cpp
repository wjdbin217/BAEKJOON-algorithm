#include <iostream>
using namespace std;
#include <vector>

int main() {
	int N;
	cin >> N;
	vector<int> vec;

	if (N == 1) return 0;

	int var = N;

	while (var > 1)
	{
		// 나누어 지는 수를 오름차순으로 찾아서 vec에 저장
		for (int i = 2; i <= var; i++)
		{
			if (var % i == 0)
			{
				var /= i;
				vec.push_back(i);
				break;
			}
		}
	}
	
	for (int i : vec)
	{
		cout << i << '\n';
	}

	return 0;
}