#include <iostream>
#include <string>
using namespace std;

void turn(int& i)
{
	i = 20;
}

void change(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int i = 1;
	turn(i);
	cout << i <<endl;
	cout << "用引用交换两个数字" << endl;
	int a = 1, b = 2;
	change(a, b);
	cout << " a  " << a << "  " << " b  " << b;
	return 0;
}