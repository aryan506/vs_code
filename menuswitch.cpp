#include<iostream>
using namespace std;
int main()
{
    int a,b,c,option;
    cout<<"menu \n";
    cout<<"1.add \n";
    cout<<"2.subtract \n";
    cout<<"3.multiply \n";
    cout<<"4.divide \n";
    cout<<"enter A and B \n";
    cin>>a>>b;

    cout<<"enter your choice \n";
    cin>>option;

    switch (option)
    {
    case 1:c=a+b;
        break;
    case 2:c=a-b;    
        break;
    case 3:c=a*b;
        break;
    case 4:c=a/b;
        break;        
    default:
    cout<<"error";
        break;
    }
    cout<<"result is "<< c;
    return 0;
}