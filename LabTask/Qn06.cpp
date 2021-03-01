#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
 	static int x=0,y=0;
   int i;
	char b,a[5]={'a','e','i','o','u'};
   cout<<"enter the number "<<endl;
   cin>>b;
   for(i=0;i<5;i++)
     {
     	if(a[i]==b)
     	{	
		 x++;
		 }
	 }
	 if(x==1)
	 {
	   cout<<"vowel";
	 }
	 else
	 {
	  cout<<"const";
	 }
}
