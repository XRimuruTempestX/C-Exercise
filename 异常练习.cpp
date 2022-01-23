#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	int result = 0;
	while (cin >> a >> b) {
		try {
			if (b == 0) {
				throw exception("除数不能为0");
			}
			cout << a / b;
		}
		catch (exception e) {
			cout << e.what()
				<< "是否继续？输入 n 退出" << endl;
			char c;
			cin >> c;
			if (c == 'n')
			{
				break;
			}
		}
	}
	return 0;
}