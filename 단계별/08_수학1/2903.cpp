#include <iostream>
using namespace std;
#include <cmath>

int main() {

	int dot = 2;
	int N;
	cin >> N;

	while (N--) dot = dot * 2 - 1;
	cout << dot*dot;



	return 0;
}