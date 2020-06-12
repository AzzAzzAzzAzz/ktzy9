#include "Stack.h"
using namespace std;
#include<iostream>

bool Stack::IsEmpty()
{
	if (top == 0)
		return true;
	return false;
}

bool Stack::IsFull() 
{
	if (top == SIZE)
		return true;
	return false;
}

bool Stack::Push(int x)
{
	if (IsFull())
	{
		cout << "栈已满，入栈失败" << endl;
		return false;
	}
	else
	{
		s[top] = x;
		++top;
		return true;
	}
}

bool Stack::Pop(int& x)
{
	if (IsEmpty())
	{
		cout << "栈为空，出栈失败" << endl;
		return false;
	}
	else 
	{
		--top;
		x = s[top];
		return true;
	}
}

void Stack::translate2(int n)
{
	int n1 = n;
	Stack stack;
	int i = 0;
	while ( ( n / 2 ) != 0)
	{
		stack.Push(n % 2);
		n = n / 2;
		i++;
	}
	cout << n1 << "转换成二进制之后为：" ;
	while (i > 0)
	{
		int n2;
		stack.Pop(n2);
		cout << n2;
		i--;
	}

}

void Stack::translate8(int n)
{
	int n1 = n;
	Stack stack;
	int i = 0;
	while ((n / 8) != 0)
	{
		stack.Push(n % 8);
		n = n / 8;
		i++;
	}
	cout << n1 << "转换成八进制之后为：" << "03";
	while (i > 0)
	{
		int n2;
		stack.Pop(n2);
		cout << n2;
		i--;
	}

}

void Stack::translate16(int n)
{
	int n1 = n;
	Stack stack;
	int i = 0;
	while ((n / 16) != 0)
	{
		stack.Push(n % 16);
		n = n / 16;
		i++;
	}
	cout << n1 << "转换成十六进制之后为：" << "0x";
	while (i > 0)
	{
		int n2;
		char n3;
		stack.Pop(n2);
		if (n2 < 10)
		{
			cout << n2;
		}
		else
		{
			switch (n2)
			{
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "D";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
				cout << "F";
				break;
			default:
				break;
			}
		}
		i--;
	}

}
