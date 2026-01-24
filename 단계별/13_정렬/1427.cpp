#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 함수 만들 때 항상 pass by reference 항상 생각하기
void selectionSort(vector<int>& vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
    int max_index = i;
	for (int j = i + 1; j < vec.size(); j++)
	{
		if (vec[max_index] < vec[j])
		{
				max_index = j;
		}
	}
	swap(vec[max_index], vec[i]);}
}

int main() {

	int n;
	cin >> n;

	vector<int> vec;

int iter = n;

	while (iter > 0)
	{
		int var = iter % 10;
		iter /= 10;
		vec.push_back(var);      
    }

    selectionSort(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }

    return 0;
}