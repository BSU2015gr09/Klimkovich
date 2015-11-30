//b) В программе объявлен массив целых чисел фиксированной "емкости" N. //
//Пользователь вводит массив, затем пользователь вводит число, если такое число есть - то печатается его индекс, если такого числа нет об этом сообщается пользователю.// 
//При выполнении задания надо написать функцию, осуществляющую поиск в массиве. Она возвращает первый индекс, если таких чисел несколько, 
//и -1 если такого числа нет
#include <iostream>  
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;
//Инициализация массива
int initfunction(int M[10], int const N)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		M[i] = rand() % 20 - 10;
		cout << M[i] << " ";
	}
	cout << endl;
	return 0;
}

//Поиск введённого числа
void findnumber(int M[], int N, int num)
{int nonum = 0;
for (int i = 0; i < N; i++) {
	if (M[i] == num) {
		cout << "Index: " << i << endl;
		break;
	}
	else if (i = N) {
		cout << "No such number"<<endl;
	}
}
}

int main()
{
	const int N = 10;
	int M[N], num;
	initfunction(M, N);
	cout << "Enter number which you wish to find" << endl;
	cin >> num;
	findnumber(M, N, num);
	system("pause");
	return 0;
}