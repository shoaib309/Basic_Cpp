#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
	   {
	   	 
	   	 if(j<=i)
	   	 {
	   	 	cout<<" ";
			}
			else 
			{
				cout<<"*";
			}
	   }
	   cout<<endl;
	   
	}
}
