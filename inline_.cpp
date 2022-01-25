#include <iostream>
#include <string>
using namespace std;
//inline 内联函数
inline bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}


int main()
{
	string s1 = "asd";
	string s2 = "asdf";
	cout << isShorter(s1, s2) << endl;
	//内联函数将调用展开：
	//cout << s1.size() < s2.size() << endl; 目的是减少运行时的开销

	return 0;
}