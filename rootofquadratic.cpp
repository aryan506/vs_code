#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    float a , b , c , r1 ,r2 ;
    cout<<"enter the coefficent of x2   ";
    cin>>a;
    cout<<"enter the coefficent of x    ";
    cin>>b ;
    cout<<"enter the constant value of expression   ";
    cin>>c ;
    r1= (-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<r1;
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<r2;
    return 0 ;
}