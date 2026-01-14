#include <iostream>
using namespace std;

int main() {
	
	int max;
	int order;
	int X;
	
	cin >> X;
	max = X;
	order = 1;

	for (int i = 1; i < 9; i++)
	{
		cin >> X;
		if (X > max)
		{
			max = X;
			order = i + 1;
		}
	}
	cout << max << '\n' << order;
	return 0;
}