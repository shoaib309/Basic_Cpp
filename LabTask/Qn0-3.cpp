#include<iostream>   //header files
#include<stdio.h>     //header files
#include<string.h>    //header files
using namespace std;    // work in uses of "cout" and "cin"
int fun(char a[],int n)     // funtion defination
{
int i;
for(i=0;i<n;i++)
	{
		if(a[i]=='0')
		{
			cout<<a[i]<<" is zero number "<<endl;
		}
		else if(a[i]%2!=0)
		{
			cout<<a[i]<<" is odd number "<<endl;
		}
		else if(a[i]%2==0)
		{
			cout<<a[i]<<" is even number "<<endl;
		}
    }
}

int main()  // main() funtion 
{
	int n;
	 char a[100];
	cout<<"enter the number "<<endl;
	cin>>a;           // enter the number
	n=strlen(a);     // length of arry
	fun(a,n);        //funtion calling
}
