#include<iostream>
using namespace std ;
int main ()
{
    int year ;
    cout<<"enter the year \n";
    cin>>year;

    if (year%400 ==0)
    {
        cout<<"year is leap year \n";
    }
   else if (year%100 ==0)
    {
        cout<<"this year is not a leap year \n";
    }
    
    else if (year%4 ==0)
    {
        cout<<"year is a leap year \n";
    }
    
    
    return 0;
}