#include <iostream>
using namespace std;

int main() {
	

	int N;
	cin >> N;

	double* arr = new double[N];
	double max = 0;     // 나중에 나눗셈 계산에서 실수 결과를 얻어야 하므로 double type으로

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		if (max < x)
		{
			max = x;
		}
		
	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / max * 100;
	}

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	cout << sum / N;
	return 0;
}