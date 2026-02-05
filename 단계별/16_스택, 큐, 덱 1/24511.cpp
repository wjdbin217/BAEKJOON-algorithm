#include <iostream>
using namespace std;
#include <vector>
#include <deque>

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n;
	cin >> n;

	vector<int> type(n); // 0: queue, 1: stack
    for (int i = 0; i < n; i++) 
	{
        cin >> type[i];
    }

    deque<int> dq;
    for (int i = 0; i < n; i++) 
	{
        int val;
        cin >> val;
        // 큐인 경우에만 의미가 있으므로 큐의 원소만 덱에 담음
        if (type[i] == 0) 
		{
            dq.push_back(val);
        }
    }

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		// 새로운 원소 x를 큐들의 맨 앞에 넣는다고 생각
		dq.push_front(x);
		// 그리고 큐들의 맨 뒤에서 나오는 값이 리턴값
		cout << dq.back() << " ";
		dq.pop_back();
	}
	cout << '\n';
	
	return 0;
}