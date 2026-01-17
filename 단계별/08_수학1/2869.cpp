#include <iostream>
using namespace std;

int main() {

	long long A, B, V;
	cin >> A >> B >> V;
	
	// 마지막 날 낮에 올라가기 직전까지 필요한 높이
	// V - A 이상을 이미 올라와 있으면, 다음 낮에 끝
	// (V - A) / (A - B) 의 올림
	
	long long daily = A - B; // 하루에 가능한 높이
	long long target = V - A; // 막날 제외하고 올라야할 높이
	long long days = (target + daily - 1) / daily + 1;   // 올림연산 + 1

	cout << days;
	return 0;
}