#include<iostream>
using namespace std ;
int main()
{
    int A[]={2,3,4,5,6,7,8,9};
    float b[]={2.5f,2.7f,4,6,8,7.6f};
    for(auto x:A)
    
    cout<<x<<endl;
    cout<<endl;
    for(auto y:b)
    cout<<y<<endl;
    return 0;
}