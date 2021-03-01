#include<iostream>
using namespace std;
int main(){  //main() funtion
int a,i,j,k,count=0;
cout<<"enter the number "<<endl;
cin>>a;
 if(a>1)
   {
      for(i=1;i<=a;i++)
         {
         	if(a%i==0)
			{
			  count++;
             }
		 
		 }
		 if(count==2)
		 {
		 	cout<<"prime number "<<endl;
		 }
		 else
		 {
		 	cout<<"not prime number "<<endl;
		 	
		 }
    }
  else if(a==1)
  {
  	cout<<"prime "<<endl;
  }
  else
  {
  	cout<<"invalide "<<endl;
  }
}
