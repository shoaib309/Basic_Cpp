#include <iostream>
using namespace std;
int main()
{

    char grade;
    cout<<"Enter the grade ";
    cin>>grade;
    float points;

    switch(grade)
    {
        case 'A':
        points = 4.0;
        break;         // if we don't write the break then it will execute the all "points" variable and will assign the last one so the out put will be 0.0

        case 'B':
        points = 3.0;
        break;

        case 'C':
        points = 2.0;
        break;

        default:
        points = 0.0;
        break;
    }

    cout<<"Points = "<<points;




}
