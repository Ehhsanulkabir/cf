#include<iostream>
#include<iomanip>
using namespace std;

#define PI 3.141592653

int main ()
{
    double r;
    cin >> r;

    cout << fixed << setprecision(9)<<PI *r * r <<endl;

    return 0;
}
