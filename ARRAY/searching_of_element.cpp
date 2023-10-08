#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the value of element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"elements you entered are listed below"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";    
    }
    int key;
    cout<<endl;
    cout<<"enter the number you want to search"<<endl;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
          cout<<"successfull    ";
          cout<<"position of key is "<<i<<endl;
          return 0;
        }
    }
    cout<<"unsuccessfull";
    return 0;
}