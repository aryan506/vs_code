#include<iostream>
using namespace std;
int main()
{
    int i,n,factor ;
    cout<<"enter the vslue of n\n";
    cin>>n;
    for ( i = 1; i <n; i++)
    {
        if (n % i == 0)
        {
            cout<<i <<endl;
        }
        
    }
    
    return 0;
}