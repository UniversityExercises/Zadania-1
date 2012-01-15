#include <iostream>

using namespace std;

double srednia (int n)
{
    int liczba = 0;
    double suma =0;
    double srednia=0.0;

    for(int i=0; i<n; i++)
    {
        cout<<"wprowadz liczbe:";
        cin>>liczba;
        suma=suma+liczba;
    }
    srednia=suma/n;
    return srednia;
}

void drukuj_srednia (double srednia)
{
    cout<<srednia<<endl;
}

int main()
{
   double sr=srednia(3);
   drukuj_srednia(sr);
    return 0;
}
