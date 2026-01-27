#include <iostream>
using namespace std;
#include <stack>

int main() {

	int k;
	cin >> k;

	stack<int> stack;
	int sum = 0;

	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			sum -= stack.top(); 
			stack.pop();
		}
		else
		{
			sum += num;
			stack.push(num);
		}
	}

	cout << sum;


	return 0;
}