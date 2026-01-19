#include <iostream>
using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min_prime = 10000;

	for (int i = M; i <= N; i++)
	{
		// edge case : 1은 따로 판별
		if (i < 2) continue;
		// 소수 판별
		bool is_prime = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
		{
			sum += i;
			if (i < min_prime)
			{
				min_prime = i;
			}
		}
	}
	

	if (sum == 0)
	{
		cout << -1;
	}
	else 
	{
		cout << sum << '\n' << min_prime;
	}

	return 0;
}