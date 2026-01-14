#include <iostream>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	int* arr = new int[N];  // 동적 배열 생성
	
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	// int arr[101] = {0, };    이렇게 빠르게 할 수도 있음.

	for ( int a = 0; a < M; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int b = i-1; b <= j-1; b++)
		{
			arr[b] = k;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}

	delete[] arr;   // 해제

	return 0;
}