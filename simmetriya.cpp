#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	long int b = 0, c = 0, numb = 0;
	int a = 0;
	cout<<"Enter a number ";
	cin>>numb;
	b = numb;
	while (b>0)
	{
		a = b % 10;
		c = (c + a) * 10;
		b = (b - a) / 10;
	}
	c = c / 10;
	if (numb == c)
	{
		cout<< "simmetritchno"<<endl ;
	}
	else
	{
		cout<<"ne simmetrichno"<< endl;
	}
	return 0;
}