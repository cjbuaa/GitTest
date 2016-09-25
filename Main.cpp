#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    double a =  1.0;
    double b = -5.0;

    double c = sqrt(a/b);
    double d = sqrt(-a/b);

    if(d != d)
    {
        cout<<"d is nan..."<<endl;

        exit(1);
    }


    if(c != c)
    {
        cout<<"c is nan..."<<endl;
        exit(1);
    }

    return 0;
}
