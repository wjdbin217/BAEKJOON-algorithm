#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int var;
		cin >> var;

		// edge case : 1은 소수 아님.
		if (var == 1) continue;

		bool is_prime = true;

		for (int j = 2; j * j <= var; j++)
		{
			if (var % j == 0) // 나머지가 0
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime) count++;
	}

	cout << count;

	return 0;
}