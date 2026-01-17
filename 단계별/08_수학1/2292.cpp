#include <iostream>
using namespace std;

int main() {
	long long N;	
	cin >> N;

	long long layer = 1;
	long long max_num = 1;

	while (N > max_num)
	{
		max_num += 6 * layer;
		layer++;
	}

	cout << layer;
	
	return 0;
}