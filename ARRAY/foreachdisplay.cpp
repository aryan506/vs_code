#include<iostream>
using namespace std ;
int main()
{
    int n;
  
    cout<<"enter the value of n"<<endl;
    cin>>n;

      int a[n]; 

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    for ( auto x:a)
    {
           cout<<x<<"   ";
    }
    return 0 ;
    
}