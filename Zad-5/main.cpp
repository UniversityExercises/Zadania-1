#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"wprowadz liczbe calkowita"<<endl;
    cin>>a;

    a=a%2;
    if (a==0)
    cout<<"parzysta";
    else
    cout<<"nieparzysta";
    return 0;
}
