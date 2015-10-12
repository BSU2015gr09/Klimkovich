//Сумма цифр на чётных и нечётных позициях. Сделать вывод делимости числа на 11
#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int main()
{   int a=0,sum1=0,sum2=0,res=0,i=1;
    cout<<"Enter your number "<<endl;
    cin>>a;
    i=1;
	int q=0;
    while (a>0){
		  q=a%10;
          if (i%2==0)
		  {sum1=sum1+q;}
          else {
          sum2=sum2+q;}
          i++;
          a=a/10; }
    cout<<"Summa chetnih= "<<sum1<<endl;
    cout<<"Summa nechetnih= "<<sum2<<endl;
          res=sum1-sum2;
    if (res==0){cout<<"Number could be devided by 11";}
    else {cout<<"Number could not be devided by 11";}
	return 0;
}
