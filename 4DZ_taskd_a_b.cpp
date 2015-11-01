#include <iostream>
using namespace std;
int main()
{
	const int N = 20;
	int mas [N] [N];
	int k = 1; //элементы которыми будет заполняться массив
	//a.Элементы массива слева-направо построчно
	cout << "Right - left:" << endl;
	for (int rous = 0; rous < N; rous++) 
	{
		for (int cols = 0; cols < N; cols++) 
	  {
		mas[rous][cols] = k;
		cout << mas [rous] [cols] << "\t";
		k++;
	  }
	}
	cout << "" << endl;
	//b.Элементы массива справа-налево построчно
	cout << "Left-right: " << endl;
	k = 1;
	for (int rous = 0; rous < N; rous++) 
	{
		for (int cols = N - 1; cols >=0; cols--)
	  {
		mas[rous][cols] = k;
		k++;
	  }
	}
	
	for (int rous = 0; rous < N; rous++)
	{
		for (int cols = 0; cols < N; cols++) 
	  {
		cout << mas[rous][cols] << "\t";
	  }
	}

	system("pause");
	return 0;
	
}