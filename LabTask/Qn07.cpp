#include<iostream> //header files 
#include<string.h>
using namespace std;
int main()   //main() funtion
{
	int i,x,a[100]; //varibles
	
    cout<<"enter the strenght of the number "<<endl;
	cin>>x;
	cout<<"enter the number "<<endl;
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"forward "<<endl;
	for(i=0;i<x;i++)
	{
		cout<<a[i];
	}
	cout<<endl<<"backward "<<endl;
		for(i=x-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
