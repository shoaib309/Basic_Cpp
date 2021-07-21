#include <iostream>
using namespace std;
int area_and_circumference(int radius)
{
    int pi = 3.141;
    int area = pi*(radius*radius);
    int circumference = 2*pi*radius;
    return area,circumference;
}
int main()
{
    cout<<area_and_circumference(3);
}
