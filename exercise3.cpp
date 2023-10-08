#include<iostream>
using namespace std;
int main()
{
    int total_amount,discount,remaning_amount;
    cout<<"enter total_amount \n";
    cin>>total_amount;
    if (total_amount>=500)
    {
        cout<<"discount is 20%\n";
        discount = (total_amount*20)/100;
        cout<<"dicount_amount is  "<<discount<<endl;
        remaning_amount=total_amount-discount;
        cout<<"remaning_amount is  "<<remaning_amount<<endl;
    }
    else if (total_amount>=100 && total_amount<=500)
    {
         cout<<"discount is 10%\n";
        discount = (total_amount*10)/100;
        cout<<"dicount_amount is  "<<discount<<endl;
        remaning_amount=total_amount-discount;
        cout<<"remaning_amount is  "<<remaning_amount<<endl;
    }
    else{
        cout<<"no dicount";
    }

    return 0;
}