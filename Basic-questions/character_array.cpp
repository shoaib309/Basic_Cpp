#include <iostream>
using namespace std;
int main()
{

    char a [] = "Hello";

    for(int i=0;i>=0;i++)
    {
        if(a[i]=='\0') // In each array of character at it's last there is a "Null Character" stored so we are giving this condition that the member of array is becoming the null character so just break the loop and we know already that "null character" will only come at the last of the array;
        break;

        else
        cout<<a[i];

    }

}
