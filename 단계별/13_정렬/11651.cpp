#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return a. first < b.first;
	}
	return a. second < b.second;
}
// A (3, 2) B (1, 2) 일 때
// cmp(A, B) = false
// cmp(B, A) = true


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

//     sort(points.begin(), points.end());
// pair<int, int>의 기본 정렬 기준
// first 오름차순, first가 같으면 second 오름차순

// sort(begin, end, 비교함수);
// sort는 비교 하는 방법을 함수로 받는 함수임.
	sort(points.begin(), points.end(), cmp);
	
    for (int i = 0; i < n; i++) {
        cout << points[i].first << ' ' << points[i].second << '\n';
    }

    return 0;
}