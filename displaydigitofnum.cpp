#include<iostream>
using namespace std;
int main  ()
{
    int r,n,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
    
    return 0;
}