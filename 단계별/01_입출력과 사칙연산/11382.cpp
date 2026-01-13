#include <iostream>
using namespace std;

// 정말 간단한 입출력 문제이지만 10^12 * 3 일 경우 int 자료형의 범위를 초과하기 때문에 long으로 선언
int main() {
	long long int A, B, C;
	cin >> A >> B >> C;
	cout << A + B + C << endl;

	return 0;
}


// long == long int     두 표현은 같은 의미이다.
// long long == long long int

// 이 크기들은 딱 고정된 것이 아니라 환경 의존적임.
// 그래서 long이 4byte 일수도, 8byte 일수도 있음.
// 따라서 웬만하면 long long 을 쓰는게 훨씬 안전하다.
// long long은 21억 이상