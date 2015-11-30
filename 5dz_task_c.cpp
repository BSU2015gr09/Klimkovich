//В программе объявлен массив А целых чисел (размер массива 100).
//Пользователь вводит число реально используемой части массива (число N).
//Эта часть затем заполняется случайными числами. Потом распечатываем массив.
//Затем удаляем первый элемент массива (сдвигая остальные элементы) и меняем N на единицу.
//Потом пользователь вводит произвольное число и оно добавляется в конец используемой части массива и меняем N на единицу.
//Потом распечатываем массив. 
//Затем опять удаляем первый элемент массива (сдвигая остальные элементы) и меняем N на единицу.
//Потом пользователь вводит произвольное число и оно добавляется в конец используемой части массива и меняем N на единицу.
//Потом распечатываем массив.
#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;
//Инициализация массива
void initfunction(int M[], int elements)
{
	srand(time(NULL));
	for (int i = 0; i < elements; i++){
			M[i] = rand() % 20 - 10;
		}
}
//Функция выводящая массив на экран
void showarray(int M[], int elements)
{
		for (int i = 0; i < elements; i++){
			cout << M[i] << " ";}
		cout << endl << endl;
}
//Удаляет первый элемент массива
void deletefirst(int M[], int &elements)
{
		for (int i = 0; i < elements; i++){	
			M[i] = M[i + 1];
		}
	elements = elements - 1;
}
//Добавляет последний
void addelement(int M[], int &elements)
{
	int number = 0;
	cout << "You can add any number you want in array. Do it, just enter  ";
	cin >> number;
	cout << endl;
	elements++;
		for (int i = 0; i < elements; i++){
			M[elements - 1] = number;}
}

int main()
{
	int const  N = 100;
	int elements, M[N];
	cout << "Enter number of elements in array  " << endl;
	cin >> elements;
	cout << endl;
	if (elements <= 100)
	{
		initfunction(M, elements);
		showarray(M, elements);

		deletefirst(M, elements);
		cout << "Now I will delete first element in array without asking your permission" << endl << endl;
		showarray(M, elements);

		addelement(M, elements);
		cout << "Have a look! Your number was added" << endl << endl;
		showarray(M, elements);

		cout << "We will repeat all the actions again. Just for fun and because you have no choise" << endl<< endl;
		deletefirst(M, elements);
		cout << "Deleting first element..."<<endl<<endl;
		addelement(M, elements);
		showarray(M, elements);
		cout << "Thank you for having fun." << endl << endl;
	}
	else
		cout << "Too big number. I don't like numbers bigger than hungry 100" << endl << endl;
	system("pause");
	return 0;
}