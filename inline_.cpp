#include <iostream>
#include <string>
using namespace std;
//inline ��������
inline bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}


int main()
{
	string s1 = "asd";
	string s2 = "asdf";
	cout << isShorter(s1, s2) << endl;
	//��������������չ����
	//cout << s1.size() < s2.size() << endl; Ŀ���Ǽ�������ʱ�Ŀ���

	return 0;
}