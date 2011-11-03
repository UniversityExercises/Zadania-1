#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;

    cout<<"wprowadz liczbe"<<endl;
    cin>>x;
    if(x<0)
        cout<<"wynik to 0";
    else
        cout<<"f(x)="<<(sqrt(x)+x)/(2+x);

    return 0;
}
