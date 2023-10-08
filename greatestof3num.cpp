#include<iostream>
using namespace std;
int main()
{
    int a , b , c;
    cout<<"ENTER A , B , C"<<endl;
    cin>>a>>b>>c ;
    if (a>b && a>c)
    {
        cout<<"A IS GRATEST";
    }
    else{
        if (b>c )
        {
            cout<<"B IS GREATEST";
        }
        else{
            cout<<"C IS GREATEST";
        }
    }
    return 0;
}