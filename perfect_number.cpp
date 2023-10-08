#include<iostream>
using namespace std ;
int main ()
{
    int i,n,sum=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
              sum=sum+i;
             cout<<i<<endl;
        }
       
    }
  
    if (n*2==sum)
    {
        cout<<"this is a perfect number"<<endl;
    }
    else{
        cout<<"this is not a perfect number";
    }
    
    return 0;

}