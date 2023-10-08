#include<iostream>
using namespace std ;
int main()
{
    int i,n,sum=0;
    cout<<"enter the given number\n";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
          sum=sum+i;
        }
        
    }
    // cout<<"the sum of factor of the given number is "<<sum;
    if (2*n==sum)
    {
      cout<<"the number is a perfect number";
    }
    else{
    cout<<"this number is not a perfect number ";
    }
    return 0;
}