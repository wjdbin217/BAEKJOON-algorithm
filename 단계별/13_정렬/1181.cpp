#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>


bool cmp(const string& a, const string& b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; 
	cin >> n;

	vector<string> words(n);
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}

	// cmp 함수 기준으로 정렬
	sort(words.begin(), words.end(), cmp);

	// unique는 연속된 중복만 제거함. 그래서 반드시 정렬 후에 사용.
	words.erase(unique(words.begin(), words.end()), words.end());


	for (const string& w : words)
	{
		cout << w << '\n';
	}
	
	return 0;
}