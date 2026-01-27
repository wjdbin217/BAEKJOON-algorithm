#include <iostream>
using namespace std;
#include <stack>
#include <string>

int main() {

	int t;
	cin >> t;
	string ps; // Parenthesis String (괄호 문자열) 
	for (int i = 0; i < t; i++)
	{
		stack<char> stack;
		cin >> ps;
		bool valid = true;
		
		for (int j = 0; j < ps.size(); j++)
		{
			if (ps[j] == '(')
			{
				stack.push('(');
			}
			else if (ps[j] == ')')
			{
				// pop 하기 전에 항상 empty 인지 먼저 확인
				if (stack.empty())
				{
					valid = false;
					break;
				}
				stack.pop();
			}
		}

		if (valid && stack.empty())
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}