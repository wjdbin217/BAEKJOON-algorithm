#include <iostream>
using namespace std;

int main() {

	int arr[31]; // 0 ~ 30 총 31개
	for (int i = 1; i <= 30; i++)
	{
		arr[i] = i;
	}

	// 이런식으로 bool 타입을 사용해서 직관적으로 쓰는게 더 깔끔한 듯.
	// bool submitted[31] = { false };

	int num;
	for (int i = 1; i <= 28; i++)
	{
		cin >> num;
		arr[num] = 0;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (arr[i] == i)
		{
			cout << i << '\n';
		}
	}


	return 0;
}