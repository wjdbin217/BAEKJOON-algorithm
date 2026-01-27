#include <iostream>
using namespace std;
#include <stack>

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m, num;
	stack<int> stack;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> m;
		switch (m)
		{
			case 1: // 1번 명령어
				int num_push;
				cin >> num_push;
				stack.push(num_push);
				break;
			case 2:
				if (stack.empty())
				{
					cout << "-1\n";
				}
				else
				{
					cout << stack.top() << '\n';
					stack.pop();
				}
				break;
			case 3:
				cout << stack.size() << '\n';
				break;
			case 4:
				cout << stack.empty() << '\n';
				break;
			case 5:
				if (stack.empty())
				{
					cout << "-1\n";
				}
				else
				{
					cout << stack.top() << '\n';
				}
				break;
		}
	}








	return 0;
}