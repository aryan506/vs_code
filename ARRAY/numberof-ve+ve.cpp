#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elemnts"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"entered elements are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"   ";
    }
    cout<<endl;
    int positive=0 , negative=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            positive++;
        }
        
    }
    cout<<"positive number in the given array are "<< positive<<endl;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            negative++;
        }
        
    }
    cout<<"negative number in the given array are  "<<negative<<endl;  

    
    return 0;
}