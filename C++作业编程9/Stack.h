#pragma once
#define SIZE 1000
class Stack
{
public:
	Stack() :top(0) {};
	bool Push(int x);
	bool Pop(int& x);
	bool IsEmpty();
	bool IsFull();
	void translate2(int n);
	void translate8(int n);
	void translate16(int n);

private:
	int top;
	int s[SIZE];
};

