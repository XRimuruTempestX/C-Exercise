#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> s)
{
	int result = 0;
	for (const auto& a : s)
	{
		result += a;
	}
	return result;
}

int main()
{
	cout<<sum({ 1,2,3,4,5,6,7,8,9 });

	return 0;
}