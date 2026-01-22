#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	// a, b, d, e가 0인 경우가 있어서 divisionbyzero 런타임 에러를 조심해야 함.
	// 그래서 연랍방적식으로 해결하는 것보단 크래머 공식을 사용해서 해결.
	// 크래머 공식
	int det = a*e - d*b;
	int x = (c*e - f*b) / det;
	int y = (a*f - c*d) / det;
	cout << x << ' ' << y;


	return 0;
}
