#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,3,1,5};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
        
    }
    cout<<sum;
    return 0;
}