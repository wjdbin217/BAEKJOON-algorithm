#include <iostream>
using namespace std;


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

	int n, k;
	cin >> n >> k;

	int arr[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	selectionSort(arr, n);

	cout << arr[n - k];
	

	return 0;
}