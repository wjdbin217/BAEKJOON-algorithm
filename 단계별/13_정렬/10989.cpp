#include <iostream>
using namespace std;
#include <vector>

// <조건>
// N <= 10,000,000
// 수의 범위 <= 10,000
// 메모리 제한 8MB

// 일반 정렬이 아닌 counting sort 사용
int main() {
    ios::sync_with_stdio(false); // C/C++ 입출력 분리
    // cin / cout 속도 대폭 증가함.
    cin.tie(nullptr); // 입력할 때마다 cout flush 방지

    int n;
    cin >> n;
    int count[10001] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        while (count[i]--)
        {
            cout << i << '\n';
        }
    }

    return 0;
}