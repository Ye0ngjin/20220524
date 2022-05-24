#include <iostream>
#include <string>
#include <stack>

using namespace std;

template<typename T>
class Stack
{
public:
	Stack() {}
	virtual ~Stack() {}

	T Database[10];
	T Temp[10];

	int Cursor = -1;

	void Push(T A)
	{
		Database[++Cursor] = A;
	}

	void Pop()
	{
		Cursor--;
	}

	T Top()
	{
		return Database[Cursor];
	}
};

int main()
{
	Stack<float> IntStack;

	for (int i = 1; i <= 10; ++i)
	{
		IntStack.Push(i);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntStack.Top() << ", ";
		IntStack.Pop();
	}

	stack<float> FloatStackSTL;
	for (int i = 1; i <= 10; ++i)
	{
		FloatStackSTL.push(i * 1.1f);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << FloatStackSTL.top() << ", ";
		FloatStackSTL.pop();
	}

	return 0;
}