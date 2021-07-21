#include <iostream>
using namespace std;
int main()
{
    int n, min = 32767 , max = 0;
    char choice;
do{
    cout<<"Enter the number: ";
    cin>>n;

    if(n>max)
    max = n;

    if(n<min)
    min=n;

    cout<<"Do you want to continue  y/n ";
    cin>>choice;


    }while(choice =='Y'  || choice == 'y');



    cout<<"Max number = "<<max<<endl;
    cout<<"Min Number = "<<min<<endl;










}

