#include <iostream>
using namespace std;
// линейный конгруэнтный генератор псевдослучайных чисел,Используя коэффициенты из википедии
int main()
{
	int mas[40];
	int a = 4096, c = 150889, m = 714025;
	mas[0] = 1;
	cout << mas[0] << " is the first number" << endl;
	for (int n = 1; n < 40; n++) {
		mas[n] = (a*mas[n - 1] + c) % m;
		cout << mas[n] << " is the " << n + 1 << " number" << endl;
	}
	system("pause");
	return 0;
}