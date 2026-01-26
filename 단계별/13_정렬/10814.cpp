#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

bool cmp(const pair<int, string>& a, const pair <int, string>& b)
{
	if (a.first == b.first)
	{
		return false; // 나이 같으면 기존 순서 유지
	}
	return a < b;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, string>> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i].first >> vec[i].second;
	}

	// Stable Sort : 정렬을 했을 때 중복된 값들의 기존 순서가 변하지 않는 정렬 방식.
	stable_sort(vec.begin(), vec.end(), cmp);


	for (int i = 0; i < n; i++)
	{
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}

	return 0;
}