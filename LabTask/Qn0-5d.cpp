#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		for(j=10;j>=1;j--)
	   {
	   	 
	   	 if(j>=i)
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
