#include<iostream>
using namespace std ;


float add(float x , float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
float a ,b ,c;
cout<<"enter the value of a "<<endl<<"enter the value of b "<<endl;
cin>>a>>b;
c=add(a,b);
cout<<"the value of c is  "<<c<<endl;
return 0;
}