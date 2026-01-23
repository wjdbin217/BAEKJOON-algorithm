#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// pass by reference
void selectionSort(vector<int>& arr, int n)
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

// selectionSort는 O(n^2)이어서 시간 초과됨.

// algorithm의 내장함수 sort 사용
// sort()는 quickSort 기반

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// selectionSort(arr, n);
	
	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}