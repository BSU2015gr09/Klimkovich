//Сумма всех цифр до первого встреченного нуля
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int a, b, c, sum, z;
	cout << "enter number" << endl;
	cin >> a;
	c = z = b = 1;
	sum = 0;
	while (b!= 0)
	{   c = c * 10;
		b = a % c;
		if (c > 10)
		{z = z * 10;
		 b = b / z;}
		if (b == 0)
		{break;}
		sum = sum + b;
	}
	cout << "result " << sum << endl;
	return 0;
}