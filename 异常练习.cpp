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
				throw exception("��������Ϊ0");
			}
			cout << a / b;
		}
		catch (exception e) {
			cout << e.what()
				<< "�Ƿ���������� n �˳�" << endl;
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