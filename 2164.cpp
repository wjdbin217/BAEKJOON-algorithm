#include <iostream>
using namespace std;
#include <queue>

int main() {

	int n;
	cin >> n;

	queue<int> que;
	
	for (int i = 0; i < n; i++)
	{
		que.push(i + 1);
	}

	while (que.size() > 1)
	{
		// 제일 위에 있는 카드를 바닥에 버림.
		que.pop();
		// 그 다음, 제일 위에 있는 카드를 제일 아래로
		int front = que.front();
		que.pop();
		que.push(front);
	}

	cout << que.front();

	return 0;
}