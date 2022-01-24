#include <iostream>
#include <string>
using namespace std;
string (& str(string s))[10];

typedef string sss[10];
sss& str1(string s);

auto str2(string s)->string(&)[10];

string s1[10];
decltype(s1)& str3(string s);

int c(int* a)
{
	return 0;
}

int c(const int* a)
{
	return 0;
}


int main()
{
	int k = 1;
	c(&k);
	return 0;
}

