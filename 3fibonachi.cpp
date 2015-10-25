#include <iostream>
#include <iomanip>
//в столбик отношение последующего к предыдущему и предыдущего к последующему для первых 40 чисел Фибоначчи
using namespace std;
int main()
{
	float mas[40], pprev = 0, prev = 0;
	int i;
	cout << "  Next:Privios    |    Privios:Next " << endl;
	cout << "" << endl;
	mas[0] = 1;
	mas[1] = 1;
	for (i = 2; i < 40; i++)
	{
		mas[i] = mas[i - 1] + mas[i - 2];
		pprev = mas[i] / mas[i - 1];
		prev = mas[i - 1] / mas[i];
		cout << setw(11) << setprecision(5) << pprev;
		cout << setw(8) << "|";
		cout << setw(8) << fixed << setprecision(5) << " " << prev << endl;
	}
	system("pause");
	return 0;
}