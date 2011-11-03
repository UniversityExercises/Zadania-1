#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"wprowadz znak"<<endl;
    cin>>a;

    if(a>=48 && a<=57)
        cout<<"cyfra";

    if(a>=65 && a<=90)
        cout<<"duza litera";
    else
    {
        if(a>=97 && a<=122)
            cout<<"mala litera";
        else
            cout<<"inny znak";
    }

    return 0;
}

