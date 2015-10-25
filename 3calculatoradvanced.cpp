#include <iostream>

/*"Прошаренный" калькулятор.
Пользователь может вводить произвольное число чисел и операций (поочерёдно), после введения символа ’=’ выдаётся конечный результат,
и калькулятор сбрасывается в начало.*/
using namespace std;
int main() {
begin:
	char operation = 0, n= 0;
	float num1 = 0, num2 = 0, result = 0;
	int i = 0;
	
	while (1 > 0) {
		if (i == 0) {
			cout << "Enter number ";
			cin >> num1;
			while (operation != '=') {
				cout << "Chose operation: (+), (-), (/), (*), (=), (c), (e): ";
				cin >> operation;
				if ((operation != '=') && (operation != 'e') && (operation != 'c')) {
					cout << "Enter next number: ";
					cin >> num2;
					n = '1';
			}
					switch (operation)
					{
					case '+':
						result = num1 + num2;
						i = 1;
						break;
					case '-':
						result = num1 - num2;
						i = 1;
						break;
					case '/':
						if (num2 == 0)
							cout << "Hands up you're under arrest. Division by zero is illegal." << endl;
						else
							result = num1 / num2;
						i = 1;
						break;
					case '*':
						result = num1*num2;
						i = 1;
						break;
					case 'c':
						i = 0;
						cout << "Cleaned" << endl;
						break;
					case '=':
						break;
					case 'e':
						cout << " Thanks for using! ";
						system("pause");
						return 0;
					default:
						cout << "Error" << endl;
					}
					if ((operation == '=') && (n = ' ')) {
						result = num1;
					}
					if (operation != 'c') {
						num1 = result;
					}
				}
				cout << "Result " << result << endl;

		}
		goto begin;
	}

	return 0;
}