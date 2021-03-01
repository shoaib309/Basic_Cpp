#include<iostream> // header files
using namespace std;
int main()      // main() funtion
{
	int a,b,c; // data variable
	
	cout<<"enter the year "<<endl;
	cin>>a;
	if(a<=399)
	{
		if(a%4==0)
		{
			cout<<"lear year : days = 366 "<<endl;
			
		}
		else 
		{
			cout<<"Not leap year : days = 365 "<<endl;
		}
	}
	if(a>=400)
    {
		if(a%4==0)
		{
		
		if(a%100==0)
		{
		
		if(a%400==0)
		{
			cout<<"lear year : days = 366 "<<endl;	
		}
		else 
		{
			cout<<"Not leap year : days = 365 "<<endl;
		}
      }
   }
   	else 
		{
			cout<<"Not leap year : days = 365 "<<endl;
		}
	}
}
