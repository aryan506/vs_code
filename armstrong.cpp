#include<iostream>
using namespace std;
int main  ()
{
    int r,n,sum=0,m;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        
        // cout<<r<<endl;
        sum=sum+r*r*r;
   
    }
    //  cout<<sum;
    if (sum==m)
    {
       cout<<"armstrong number";
    }
    else{
        cout<<"non armstrong number";
    }
    
    return 0;
}