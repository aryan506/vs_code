#include<iostream>
using namespace std ;

int power(int m ,int n)
// m=base and n= exponent
{
  int i , result=1 ;
  for  (i = 0; i < n; i++)
  {
    result = result*m;
  }
    return result ;
}

int main()
{
    int base , exponent , value ;
    cout<<"enter the value of base "<<endl<<"enter the value of exponent "<<endl;
    cin>>base>>exponent;
    value=power(base , exponent);
    cout<<"the value of base to the power exponent is = "<<value;
    return 0;
}