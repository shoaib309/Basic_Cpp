#include<iostream> //header files
#include<string.h> // header files
using namespace std;
int count_lowercase_vowels(char x[],int h) //funtion defination
{
	  int a=0,e=0,i=0,o=0,u=0;  //here we define variables a e i o u and their type is integer
     int y=0;
     {

	for(y=0;y<h;y++)           // here we defining for loop which starts from zero
      {
      	   if(x[y]=='a')
      	    {
      	  	 a++;
      	  	 cout<<"a appear at "<<y<<"th position"<<endl;
		    }
		   else if(x[y]=='e')
		   {
		   	 e++;
		   	cout<<"e appear at "<<y<<"th position"<<endl;
		    }
			else if(x[y]=='i')
			{
				i++;
			  cout<<"i appear at "<<y<<"th position"<<endl;
			}
			else if (x[y]=='o')
			{
				o++;
			 cout<<"o appear at "<<y<<"th position"<<endl;
			}
			else if(x[y]=='u')
			{
				u++;
			 cout<<"u appear at "<<y<<"th position"<<endl;
			}
      }
      cout<<"\n repeation \n";
     cout<<"a repeat "<<a<<"  time(s)"<<endl;
     cout<<"e repeat "<<e<<"  time(s)"<<endl;
     cout<<"i repeat "<<i<<"  time(S)"<<endl;
     cout<<"o repeat "<<o<<"  time(s)"<<endl;
     cout<<"u repeat "<<u<<"  time(s)"<<endl;
}}
int main()      // main() funtion
{
 int l;
	char x[20];  // arry of char
	cout<<"enter the string "<<endl;
	cin>>x;
	l=strlen(x);
	count_lowercase_vowels(x,l); //funtion calling
}
