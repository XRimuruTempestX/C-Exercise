#include <iostream>
using namespace std;
void turn_val(int*, int*);
int main()
{
	int va1 = 3;
	int va2 = 4;
	turn_val(&va1, &va2);
	cout << va1 << "  " << va2;
	return 0;
}

void turn_val(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}