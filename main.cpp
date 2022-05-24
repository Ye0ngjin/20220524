#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Store
{
public:
	Store() {}
	virtual ~Store() {}

	T Database;

	void Append(T A)
	{
		Database = A;
	}

	T Out()
	{
		return Database;
	}
};


int main()
{
	Store<int> IntStore;
	IntStore.Append(10);
	cout << IntStore.Out() << endl;

	Store<float> FloatStore;
	FloatStore.Append(2.2f);
	cout << FloatStore.Out() << endl;

	return 0;
}