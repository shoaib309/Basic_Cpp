#include <iostream>
using namespace std;
int main()
{
    int f=0, s=1;
    int t,n;

    cout<<"Enter the number you want the fibnoci series go ";
    cin>>n;
    cout<<f<<" "<<s<<" ";
    for(int i=3;i<=n;i++)
    {
        t = f+s;
        cout<<t<<" ";
        f = s;
        s = t;


    }


}
