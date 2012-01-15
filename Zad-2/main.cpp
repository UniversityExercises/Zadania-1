#include <iostream>
#include <math.h>

using namespace std;

double oblicz (int x, int y, int z)
{
    return sqrt(3+pow(x+2*y,2.0))+z;
}

int main()
{
    cout<<oblicz (2,3,4);
    return 0;
}
