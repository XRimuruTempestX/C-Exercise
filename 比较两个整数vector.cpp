#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> val1 = { 0,1,1,2 };
	vector<int> val2 = { 0,1,1,2,3,5,8 };
	unsigned count = 0;
	for (auto i = 0; i < val1.size(); ++i)
	{
		if (val1[i] == val2[i])
		{
			count++;
		}
	}
	if (count == val1.size())
	{
		cout << "val1ÊÇval2µÄÇ°×º";
	}

	
	return 0;
}