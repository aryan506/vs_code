#include<iostream>
using namespace std ;
int main ()
{
    int *p=new int[5];
    p[0]=12;
    
    delete []p;
    cout<<p[0]<<endl;
    p=nullptr;
    return 0;
}