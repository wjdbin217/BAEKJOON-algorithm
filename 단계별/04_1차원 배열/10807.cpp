#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int N;
	cin >> N;

	int arr[100];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int var_find;
	cin >> var_find;

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == var_find)
		{
			count++;
		}
	}

	cout << count << endl;
	
	return 0;
}