#include<iostream>
using namespace std ;
int main ()
{
    float m1,m2,m3,total,avg;
    cout<<"enter m1 m2 m3"<<endl;
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg=total/3 ;
    // cout<<avg;
    if (avg>=60)
    {
        cout<<"a grade with avg marks"<<avg<<endl;
    }
    else{
        if (35<=avg && avg<60)
        {
            cout<<"b grade with avg marks"<<avg<<endl;
        }
        else{
           
                cout<<"c grade with avg marks"<<avg<<endl;
            }
    }
    
    return 0;
}