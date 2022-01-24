#include <iostream>
#include <vector>
using namespace std;

void val(vector<int>::iterator a, vector<int>::iterator b)
{
	if (a != b)
	{
		cout << *a << "  ";
		val(++a, b);
	}
	else
	{
		cout << *a << "  ";
	}
	
}

int main()
{
	vector<int> a = { 1,2,3,4,5 };
	
	auto b = a.end();
	val(a.begin(),--b);
	return 0;
}