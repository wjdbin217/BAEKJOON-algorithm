#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int num_3kg = 0;
	int num_5kg = 0;

	int min_num = 5000;

	for (int i = 0; i <= (n + 2) / 3; i++)
	{
		for (int j = 0; j <= (n + 4) / 5; j++)
		{
			int sum = (3 * i + 5 * j);
			if (sum == n && i + j < min_num)
			{
				min_num = i + j;
			}
		}
	}

	if (min_num == 5000)
		cout << -1;
	else
		cout << min_num;


	return 0;
}