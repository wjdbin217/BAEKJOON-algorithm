#include <iostream>
using namespace std;

int main() {

	// 나머지 값(0 ~ 41)을 인덱스로 쓰는 체크 배열
	bool used[42] = { false };

	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		used[num % 42] = true;
	}

	int result = 0;
	for (int i = 0; i < 42; i++)
	{
		if (used[i])
		{
			result++;
		}
	}
	cout << result;

	// 원래는 이중 반복문을 통해 체크했었는데 비효율적인 방법임.
	// 범위가 고정된 값의 "중복 개수" 문제는 존재 여부 체크 배열이 정석
	return 0;
}