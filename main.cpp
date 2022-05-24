#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Queue
{
public:
	Queue() {}
	virtual ~Queue() {}

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
		for (int i = 0; i < 9; i++)
		{
			Database[i] = Database[i + 1];
		}
	}

	T Top()
	{
		return Database[0];
	}
};

int main()
{
	Queue<int> IntQueue;
	for (int i = 1; i <= 10; ++i)
	{
		IntQueue.Push(i);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntQueue.Top() << ", ";
		IntQueue.Pop();
	}

	return 0;
}