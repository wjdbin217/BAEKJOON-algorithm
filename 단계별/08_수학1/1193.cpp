#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	int line = 1;

	// N이 위치한 대각선 찾기
	while (N - line > 0)
	{
		N -= line;
		line++;
	}

	// 여기서 처음 N이 9였다면 while문 뒤에는 N = 3, line = 4이 됨.

	// 대각선이 홀수일 때
	if (line % 2)
	{
		cout << line + 1 - N << '/' << N;
	}
	else // 대각선이 짝수일 때
	{
		cout << N << '/' << line + 1 - N;
	}


	return 0;
}