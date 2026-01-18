#include <iostream>
using namespace std;
#include <vector>

int main() {

	int N, K;
	cin >> N >> K;
	int arr[1000];
	vector<int> vec;	

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			vec.push_back(i); // 약수이면 추가
		}
	}
	if (K <= vec.size())
	{
		cout << vec[K - 1];
	}
	else 
		cout << "0";

	return 0;
}