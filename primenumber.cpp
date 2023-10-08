#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter the value of n\n";
    cin>>n;


    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            // cout<< i<<" ";
            count++;
        }

    }
    if (count==2)
    {
        cout<<"prime number\n";
    }
    else{
        cout<<"\n"<<"non_prime number \n";
    }
    
    return 0;
}
