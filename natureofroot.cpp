#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    float a , b,c,d,r1,r2;
    // ax2+bx+c (d is discriment) (r1 and r2 are roots)
    cout<<"enter the value of a , b , c"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    r1=-b+(sqrt(d))/(2*a);
    r2=-b-(sqrt(d))/(2*a);
    if (d==0)
    {
        cout<<"roots are real and equal"<<endl;
        cout<<(-b/(2*a));
    }
    else{
        if (d>0)
        {
            cout<<"roots are real and unequal"<<endl;
            cout<<r1<<endl;
            cout<<r2<<endl;
        }
        else{
            cout<<"roots are imaginary";
        }
    }
return 0;
}