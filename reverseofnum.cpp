#include<iostream>
using namespace std;
int main ()
{
    int r,num,reverse=0;
    cout<<"enter the number "<<endl;
    cin>>num;
    while (num>0)
    {
        r=num%10;
        num=num/10;
        reverse=reverse*10+r;
    }
    cout<<reverse;
    return 0;
}