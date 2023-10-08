#include<iostream>
using namespace std;
int main()
{
    int a[8]={2,3,4,5,6,7,8,9};
    int
    cout<<"enter the key to search";
    cin>>key;
    
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key==a[mid])
        {
            cout<<"foumd at "<<mid;
            return 0;
        }
        else if (key<a[mid])
        {
            h=mid-1;
        }else{
            l=mid+1;
        }
        
        
    }
    cout<<"not found";
    
    return 0;
}