#include <iostream>
using namespace std;
// 1. i를 0부터 n-2까지 반복한다.
// 2. min_index = i
// 3. j를 i+1부터 n-1까지 훑으며 더 작은 값이 있으면 min_index를 갱신한다.
// 4. i와 min_index를 교환한다. 


void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_index = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
}


int main() {

	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	// 먼저 정렬
	selectionSort(arr, 5);

	int sum = 0;
	int avg = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	avg = sum / 5;

	cout << avg << '\n' << arr[2];

	return 0;
}