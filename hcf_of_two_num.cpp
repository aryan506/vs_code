#include<iostream>
using namespace std ;
int main()
{
    int m,n;
    cout<<"enter the first number ";
    cin>>m;
    cout<<"enter the second number ";
    cin>>n;
    while (m!=n)
    {
        if (m>n)
        {
            m=m-n;
        }
        else if (n>m)
        {
            n=n-m;
        }
     
    }
       cout<<m;
    
    return 0;
}