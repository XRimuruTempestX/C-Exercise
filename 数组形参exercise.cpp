#include <iostream>
using namespace std;

int compare(int a, const int* b)
{
	return a >= *b ? a : *b;
}

void change_ptr(int* a, int* b)
{
	int* c = a;
	a = b;
	b = c;
	cout << *a << "  " << *b << endl;
}

int main()
{
	int a = 2, b = 3;
	cout << "���ֵΪ��" << compare(a, &b) << endl;

	cout << "��������intָ��" << endl;
	change_ptr(&a, &b);


	return 0;
}