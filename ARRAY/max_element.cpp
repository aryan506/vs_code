// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={2,3,4,77,9};
//     int max=2;
//     for (int n=5, i = 0; i < n; i++)
//     {
//        if (max<a[i])
//        {
//           max=a[i];
//        }
       
//     }
//     cout<<max;
//     return 0;
// }

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
    // cout<<"enter the element "
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
    int max;
    max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    cout<<endl;
    cout<<max<<" is the max element in the array";
    
    return 0;
}