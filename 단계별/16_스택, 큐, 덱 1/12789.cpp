#include <iostream>
using namespace std;
#include <stack>

int main() {

	int n;
	cin >> n;
	stack<int> stk_wait; // 옆으로 빠지는 대기실
	int target = 1; // 지금 간식을 받아야 하는 번호표

	for (int i = 0; i < n; i++)
	{
		int var;
		cin >> var;

		// 1. 현재 들어오 사람이 내가 찾는 번호라면 바로 통과
		if (var == target)
		{
			target++;
		}
		else // 2. 아니면 잉ㄹ단 대기실에 넣기
			stk_wait.push(var);

		// 3. 대기실 맨 앞 사람이 target이라면 계속 꺼내기
		// 이 과정은 매번 사람이 새로 들어오거나 stk_wait에 들어갈때마다 체크해야 함.
		while (!stk_wait.empty() && stk_wait.top() == target)
		{
			stk_wait.pop();
			target++;
		}
	}

	// 판단
	if (target == n + 1)
	{
		cout << "Nice\n";
	}
	else
	{
		cout << "Sad\n";
	}

	return 0;
}