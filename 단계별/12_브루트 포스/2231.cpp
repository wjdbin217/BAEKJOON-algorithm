#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;

	int min = 0;

	// 최솟값을 찾는거니까 내림차순으로 물색
	for (int i = N - 1; i > 1; i--) 
	{
		int sum = i;
		int var = i;
		while (var > 0) // 자리수 다 더하기
		{
			sum += (var % 10);
			var /= 10;
		}

		if (sum == N)
		{
			min = i;
		}
	}
	
	cout << min;
	
	return 0;
}