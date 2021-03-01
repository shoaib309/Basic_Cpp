#include<iostream>
using namespace std;
int main()
{
	int i,j,a,b,c;
	static int x;
	cout<<"enter the number "<<endl;
	cin>>a;
	cout<<"factors : ";
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			cout<<i<<" , ";
		  x=x+i;
		}
	}
	cout<<endl;
	if(x==a)
	{
		cout<<a<<" perfect number "<<endl;
	}
	else 
	{
		cout<<a<<" not perfect number "<<endl;
	}
}
