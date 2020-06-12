#include<iostream>
#include"Stack.h"
using namespace std;

int main()
{
	Stack stack;
	cout << "请输入要转换的数字" << endl;
	int n1;
	cin >> n1;
	stack.translate2(n1);
	cout <<" "<<endl;
	stack.translate8(n1);
	cout << " " <<endl;
	stack.translate16(n1);
	cout << " " <<endl;
	return 0;
}