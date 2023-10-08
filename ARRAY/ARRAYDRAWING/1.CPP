#include<iostream>
using namespace std ;
int main ()
{
    int n,i,j,count=1;
    cout<<"enter the value of n";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<count<<"      ";
            count++;
        }
        cout<<endl;
    }
     return 0;
}
