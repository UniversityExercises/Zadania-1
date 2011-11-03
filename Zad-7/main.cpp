#include <iostream>

using namespace std;

int main()
{

    char a;
    cout<<"wprowadz znak by program okreslil czy jest to duza litera"<<endl;
    cin>>a;
    if(a>=65 && a<=90)
    cout<<"wprowadzono duza litere";
    else
    cout<<"wprowadzono inny znak";
    return 0;
}
