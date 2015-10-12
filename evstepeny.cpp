//Вычислить значение е встпени x
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{  
    double e,res,b;
    int i=1,x=0;
    e=1;
    b=0,001;
    res=1;
    cout << "Enter x" << endl;
    cin>>x;
        while (e>b) {
        e=e*x/i;
        res=res+e;
        i++;}
     cout<<"res="<<res<<endl;
    return 0;
}

