#include<iostream>
using namespace std ;
int main()
{
    int hour ;
    cout<<"Enter the hour";
    cin>>hour;
    if (hour>=9 && hour<=18)
    {
        cout<<"working time";
    }
    else{
        cout<<"not a working time ";
    }
    return 0;
}