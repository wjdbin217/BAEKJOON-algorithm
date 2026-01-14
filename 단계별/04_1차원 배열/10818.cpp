#include <iostream>
using namespace std;

int main() {

	int N;
	int arr[1000000];
	int min, max;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];
	
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	cout << min << " " << max << endl;

	return 0;
}