#include <iostream>
using namespace std;
#include <string>

int main() {
	int n;
	cin >> n;

	// 핵심 : 666이 연속으로 포함된 수를 작은 것부터 세어서 N번째를 찾는 것

	int count = 0;
	int num = 665;

	while (count < n)
	{
		string s = to_string(num);

		// find() : 찾으면 시작 인덱스, 못 찾으면 string::npos
		// npos는 not position, 즉 찾을 수 없음을 의미하는 상수
		if (s.find("666") != string::npos)
		{
			count++;
		}

		num++;
	}

	cout << num - 1;

	return 0;
}