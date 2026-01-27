#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main() {
	// 입출력 속도 향상
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	while (true)
	{
		string line;
		// cin >> line; 은 공백을 만나면 입력을 끊어버림.
		// 공백을 포함한 한 줄을 통째로 입력받기 위해 getline 사용
		getline(cin, line);

		// 종료 조건 : 점 하나만 있는 줄
		if (line == ".")
		{
			break;
		}

		stack<char> stk_char;
		bool is_valid = true;

		for (int i = 0; i < line.length(); i++)
		{
			char c = line[i];

			if (c == '(' || c == '[')
			{
				stk_char.push(c);
			}
			else if (c == ')')
			{
				// 스택이 비어있거나, 짝인 (가 없으면 false
				if (stk_char.empty() || stk_char.top() != '(')
				{
					is_valid = false;
					break;
				}
				else
					stk_char.pop();
			}
			else if (c == ']')
			{
				// 스택이 비어있거나, 짝인 [가 없으면 false
				if (stk_char.empty() || stk_char.top() != '[')
				{
					is_valid = false;
					break;
				}
				else 
				{
					stk_char.pop();
				}
			}
		} // for end


		// 판단
		if (is_valid && stk_char.empty())
		{
			cout << "yes\n";
		}
		else 
			cout << "no\n";
	}

	return 0;
}