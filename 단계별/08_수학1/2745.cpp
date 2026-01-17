#include <iostream>
using namespace std;
#include <cmath>

int main() {

	string N;
	int B;
	cin >> N >> B;

	int result = 0;

	for (int i = 0; i < N.length(); i++)
	{
		char ch = N[N.length() - 1 - i];

		// 아스키 코드를 활용해서 문자열로부터 정수를 얻기.
		if('0' <= ch && ch <= '9')
		{
			result += (ch - '0') * pow(B, i);
		}
		else 
		{
			result += (ch - 'A' + 10) * pow(B, i);
		}
	}

	cout << result;

	return 0;
}

// 0의 아스키 코드는 48,
// 3의 아스키 코드는 51,
// A의 아스키 코드는 65