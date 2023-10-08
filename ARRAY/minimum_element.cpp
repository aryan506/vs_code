#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element";
    cin>>n;
    int a[n];
    cout<<endl;
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"elements of the array are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"   ";
    }
    int min;
    min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        
    }
    cout<<endl;
    cout<<min<<" is the min element in the array";
    
    
    
    return 0;
}