#include <iostream>
using namespace std;

int main() {

	int N, B;
	cin >> N >> B;

	string result;

	while (N > 0)
	{
		int temp = N % B;
		if (0 <= temp && temp <= 9) result += (temp + '0');
		else result += (temp - 10 + 'A');
		N /= B;
	}

	for (int i = result.length() - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}