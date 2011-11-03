#include <iostream>

using namespace std;

int main()
{
    double x;
    cout<<"wprowadz liczbe"<<endl;
    cin>>x;
    if(x==0)
        cout<<"nie mozna dzielic przez zero";
    else
        cout<<"f(x)=1/x="<<1/x;
    return 0;
}
