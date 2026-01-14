#include <iostream>
using namespace std;

int main() {

	int arr[10000];
	int N;
	int X;

	cin >> N >> X;
	cout << endl;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < N; i++)
	{
		if (arr[i] < X)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}