#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	unsigned a = 0;
	bool c = true;
	while (cin >> s1)
	{
		if (c)
		{
			s2 = s1;
			c = false;
		}
		if (s1 == s2)
		{
			a++;
		}
		else
		{
			a = 1;
			s2 = s1;
		}
		if (a >= 2)
		{
			cout << s1;
			break;
		}
		
	}

	if (a == 1)
	{
		cout << "没有重复的"<<endl;
	}
	
	return 0;
}