//Инвертированое число
#include <iostream>
using namespace std;

int main()
{
    long int j=0,k=0,numb=0;
    int a=0;
    cout<<"enter a number  ";
    cin>>numb;
    j=numb;
    while (j>0)
    {
        a=j%10;
        k=(k+a)*10;
        j=(j-a)/10;
    }
    k=k/10;
    cout<<k;
    return 0;
}
