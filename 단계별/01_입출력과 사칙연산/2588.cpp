#include <iostream>
using namespace std;

int main() 
{
	int A, B;
	cin >> A >> B;
	
	int one, ten, hundred, total;
	// 둘 다 정수일 때만 몫이 정수로 나오는 것에 주의
	one = A * (B % 10);
	ten = A * ((B / 10) % 10);
	hundred = A * (B / 100);
	total = one + ten * 10 + hundred * 100;

	cout << one << endl;
	cout << ten << endl;
	cout << hundred << endl;
	cout << total << endl;
	
	return 0;
}