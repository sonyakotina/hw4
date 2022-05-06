#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a = 4.6, b = 1.5, y, t;
    y = 1;
    t = 1;

    if (a <= b)
    {
        y = ((a-b)/(a+b))*((a+b)/(pow(a,2)-a*b-pow(b,2)));
    }
    else
    {
        y = a+log(pow(b,2));
    }

    if (y == b)
    {
        t = (2*y+sqrt(pow(y,2)-a))/(2*b+sqrt(pow(a,2)-y));
    }
    else if (y < b)
    {
        t = pow(sin(y),2) + (1/tan(a-b));
    }
    else
    {
        t = pow((y*sin(a)), 1.0/3) + (1/(sqrt(y*cos(b))));
    }
    
    cout << "a: " << a << " "
        << "b: " << b << " "
        << "y: " << y << " "
        << "t: " << t << " ";
}
