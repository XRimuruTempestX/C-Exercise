#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	do {
		cout << "请输入两个字符串：" << endl;
		cout << "第一个：";
		cin >> s1;
		cout << "第二个：";
		cin >> s2;
		if (s1.size() > s2.size())
		{
			cout << "最长的是：" << s1 << endl;
		}
		else
		{
			cout << "最长的是：" << s2 << endl;
		}
	} while (1);
	return 0;
}