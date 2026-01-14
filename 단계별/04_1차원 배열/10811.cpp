#include <iostream>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	int* arr = new int[N + 1];
	for (int i = 0; i < N + 1; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		// 역순으로 만들기 : for문보다 이게 훨씬 직관적
		int left = a;
		int right = b;
		while (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}

	for (int i = 1; i < N + 1; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}