#include <iostream>
#include <string>
using namespace std;

bool ifup(const string& s)
{
	for (auto& s1 : s)
	{
		if (s1 >= 'A' && s1 <= 'Z')
		{
			return true;
		}
	}
	return false;
}

void lower(string& s)
{
	for (auto& s1 : s)
	{
		if (s1 >= 'A' && s1 <= 'Z')
		{
			s1 = tolower(s1);
		}
	}
}

int main()
{
	string str = "asdBBccDDee";
	cout << "判断是否有大写" << endl;
	cout << ifup(str) << endl;
	cout << "有大写改成小写" << endl;
	lower(str);
	cout << str;
	return 0;
}