#include<iostream>
using namespace std;
int main()
{
    float num[50] , sum=0.0,average;
    
    int i,n;
    cout<<"enter the number of element";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<i+1<<"    enter the number";
        cin>>num[i];
        sum = sum+num[i];
    }
    cout<<sum;
    average=sum/n;
    cout<<endl;
    cout<<average;
return 0;
}