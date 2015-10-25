#include <iostream>
using namespace std;
// линейный конгруэнтный генератор псевдослучайных чисел,используя собственные коэффициенты
int main()
{
	int mas[40];
	int a = 35324, c=269271, m = 565184;
	mas[0] = 1;
	cout << mas[0] << " is the first number" << endl;
	for (int n = 1; n < 40; n++) {
		mas[n] = (a*mas[n - 1] + c) % m;
		cout << mas[n] << " is the " << n + 1 << " number" << endl;
	}
	system("pause");
	return 0;
}