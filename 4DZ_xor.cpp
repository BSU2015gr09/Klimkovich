//алгоритм XORShift генерации псевдослучайных чисел с использованием XOR 
#include <iostream>
using namespace std;
void XOR(int &x) 
{
	int tmp;
	int a = 13, b = 15, c = 5;
	tmp = x ^ (x << a);
	tmp = tmp ^ (tmp >> b);
	x = x ^ (tmp << c);
}
int main()
{
	system("pause");
	return 0;
}