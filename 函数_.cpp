#include <iostream>
using namespace std;

int fast(int n)
{
	int result = 1;
	while (n != 0)
	{
		result *= n;
		--n;
	}
	return result;
}

size_t cout_calls()
{
	static size_t ctr = 0;
	static size_t c = 0;
	if (ctr == 0)
	{
		ctr++;
		return 0;
	}
	else
	{
		return ++c;
	}
	
}
int main()
{
	int n = 0;
	cout << "ÊäÈëÊı×Ö£º";
	cin >> n;
	int result = fast(n);
	cout << result;

	for (size_t i = 0; i != 10; i++)
	{
		cout << cout_calls() << endl;
	}
	return 0;
}

