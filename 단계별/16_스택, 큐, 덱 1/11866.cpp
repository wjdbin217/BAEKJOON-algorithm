#include <iostream>
using namespace std;
#include <queue>
#include <vector>

int main() {

	int n, k;
	cin >> n >> k;
	queue<int> que;
	vector<int> vec;

	// 1, 2, 3, 4, 5, 6, 7
	for (int i = 0; i < n; i++)
	{
		que.push(i + 1);
	}

	while (que.size() > 0)
	{
		// k - 1번 째 사람까지는 뒤로 이동
		for (int i = 0; i < k - 1; i++)
		{
			int f = que.front();
			que.pop();
			que.push(f);
		}
		// k번 째 사람은 제거
		int result = que.front();
		vec.push_back(result);
		que.pop();
	}

	cout << "<";
	for (int i = 0; i < n - 1; i++)
	{
		cout << vec[i] << ", ";
	}
	cout << vec[n - 1] << ">";
	
	return 0;
}