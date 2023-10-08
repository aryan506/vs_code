#include<iostream>
using namespace std ;
int main ()
{
    int Total_amount ,Discount_percent , Reamaning_amount ;
    cout<<"enter the Total_amount"<<endl;
    cin>>Total_amount;
    // Reamaning_amount = (Total_amount - ((Total_amount*Discount_percent)/100));
    if (Total_amount>=5000)
    {
        cout<<"20 percent discount"<<endl;
        // Discount_percent=20;

        Reamaning_amount = (Total_amount - ((Total_amount*20)/100));
        cout<<Reamaning_amount;
    }
    else
    {
        if (2000<=Total_amount && Total_amount<5000 )
        {
            cout<<"10 percent discount"<<endl;
            Reamaning_amount = (Total_amount - ((Total_amount*10)/100));
            cout<<Reamaning_amount<<endl;

        }
        else{
            if (Total_amount<2000)
            {
                 cout<<"5 percent discount"<<endl;
            Reamaning_amount = (Total_amount - ((Total_amount*5)/100));
            cout<<Reamaning_amount;
            }
           
        }
        
    }
    return 0;
}