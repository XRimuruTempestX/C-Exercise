#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	do {
		cout << "�����������ַ�����" << endl;
		cout << "��һ����";
		cin >> s1;
		cout << "�ڶ�����";
		cin >> s2;
		if (s1.size() > s2.size())
		{
			cout << "����ǣ�" << s1 << endl;
		}
		else
		{
			cout << "����ǣ�" << s2 << endl;
		}
	} while (1);
	return 0;
}