#include <iostream>
using namespace std;
float findGrade(char x);
int main()
{
    char grade;
    cout<<"Enter the Grade ";
    cin>>grade;
    float a = findGrade(grade);
    cout<<"Your CGPA is "<<a;



}
float findGrade(char x)
{

    if(x=='A')
    return 4.0;

    else if(x=='B')
    return 3.0;

    else if(x=='C')
    return 2.0;

    else
    return 0.0;

}
