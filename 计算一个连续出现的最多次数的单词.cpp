#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string s1;
	string s3;
	unsigned val = 0;
	unsigned max = 0;
	bool c = true;
	while (cin >> s)
	{
		//第一次让s1保存s的值并val++ 执行下一个输入 只执行一次
		if (c) {
			s1 = s;
			s3 = s;
			c = false;
		}
		if (s1 == s) {
			val++;
		}
		else
		{
			if (max < val) {
				max = val;
				s3 = s1;
			}
			s1 = s;
			val = 1;
			
		}
	}
	if (max < val) {
		max = val;
		s3 = s1;
	}
	if (s.size() != 0) {
		cout << s3 << "  " << max;
	}
	else
	{
		cout << "什么都没有";
	}

	return 0;
}