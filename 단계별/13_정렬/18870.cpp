#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 좌표값들을 정렬해서 작은값부터 차례대로 번호를 매김.
// 각 값의 번호는 정렬된 배열에서의 인덱스 값과 일치.
// 이 인덱스 값을 저장하는 배열을 사용.

int main() {

	int n;
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	vector<int> answer_vec(vec);
//  중복된 값을 지우고 정렬
	sort(answer_vec.begin(), answer_vec.end());
	answer_vec.erase(unique(answer_vec.begin(), answer_vec.end()), answer_vec.end());


	for (const auto& val : vec)
	{ // lower_bound : 정렬된 범위에서 val이 처음 등장하는 위치를 찾아주는 이진탐색
		auto it = lower_bound(answer_vec.begin(), answer_vec.end(), val);
		cout << (it - answer_vec.begin()) << ' ';
	}
	return 0;
}