#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"elements entered are as below"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"   " ;
    }
    int sum=0;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        sum =sum +a[i];
    }
    cout<<"sum of all element of array is "<< sum;
    
    return 0;

}


