#include <iostream>
using namespace std;
#include <deque> // DEQ 사용을 위한 헤더 

// 일반 queue 사용 X
// Deque(Double - Ended Queue) : 양방향에서 삽입과 삭제가 가능한 queue
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (input == 1)
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (input == 2)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (input == 3)
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (input == 4)
        {
            if (dq.empty()) cout << "-1\n";
            else 
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (input == 5)
        {
            cout << dq.size() << "\n";
        }
        else if (input == 6)
        {
            cout << (dq.empty() ? 1 : 0) << "\n";
        }
        else if (input == 7)
        {
            if (dq.empty()) cout << "-1\n";
            else cout << dq.front() << "\n";
        }
        else if (input == 8)
        {
            if (dq.empty()) cout << "-1\n";
            else cout << dq.back() << "\n";
        }
    }

    return 0;
}