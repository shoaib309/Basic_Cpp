#include<iostream>
using namespace std;
int main()  //main() funtion 
{
	int i,j,a;
	cout<<"enter the number "<<endl;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=a-1;j>1;j--)
		{
			
			if(i>j)
			{
				
			}
			else
			{
				if((j+i)==a)
			{
				cout<<j<<"+"<<i<<"="<<a<<endl;
			}
			}
		}
	}
	
}
