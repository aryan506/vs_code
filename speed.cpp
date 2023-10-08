#include<iostream>
using namespace std ;
int main ()
{
    int v,u,a,s;
    cout<<"enter the value of v"<<endl;
    cin>>v;
    cout<<"enter the value of u"<<endl;
    cin>>u;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    s=(v*v-u*u)/(2*a);
    cout<<"the value of s is "<<s;
    return 0;
}