#include <iostream>
using namespace std;

int main() {

	int N, M;
	N = 100;
	M = 100;

	while (true)
	{
		cin >> N >> M;

		if (N == 0 && M == 0) // 종료 조건
			break;

		if (M % N == 0)
		{
			cout << "factor\n";
		}
		else if (N % M == 0)
		{
			cout << "multiple\n";
		}
		else 
		{
			cout << "neither\n";
		}
	}


	return 0;
}