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
	cout << "�ж��Ƿ��д�д" << endl;
	cout << ifup(str) << endl;
	cout << "�д�д�ĳ�Сд" << endl;
	lower(str);
	cout << str;
	return 0;
}