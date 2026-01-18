#include <iostream>
using namespace std;
#include <vector>

int main() {

	int n;


	while (true)
	{
		cin >> n;
		// 이 두 변수를 안에다 선언해야 매 번 초기화될 수 있도록 해야 함.
		vector<int> vec;
		int count = 0;

		if (n == -1) // 종료 조건
			break;

		// 약수 찾아서 저장
		for (int i = 1; i < n; i++) // 자기 자신은 제외
		{
			if (n % i == 0)
			{
				vec.push_back(i);
				count += i;
			}
		}

		if (count == n)
		{
			cout << n << " = ";
			for (int i = 0; i < vec.size() - 1; i++)
			{
				cout << vec[i] << " + ";
			}
			cout << vec[vec.size() - 1] << endl;
		}
		else 
		{
			cout << n << " is NOT perfect." << endl;
		}

	}

	return 0;
}