//Evaluating the postfix expression//
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string st;
	cin >> st;
	int length = st.length();
	stack<int> s;
	
	for(int i = 0; i < length; i++)
	{
		if(isdigit(st[i])) //operand -> push it into stack//
		s.push(st[i] - '0');
		else 
		{
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			switch(st[i])
			{
				case '+' : 
				{
					int c = a + b;
					s.push(c);
					break;
				}
				case '-':
					{
						int c = a - b;
						s.push(c);
						break;
					}
				case '*':
					{
						int c = a * b;
						s.push(c);
						break;
					}
				case '/':
					{
						int c = a/b;
						s.push(c);
						break;
					}
			}
		}
		
	}
	cout << s.top() << endl;
	return 0;
	
}
