#include <iostream>
using namespace std ;
int main ()
{ 
    string email ;
    cout<<"enter the email "<<endl;
    getline(cin,email);
    cout<<email;
    cout<<endl;
    int  i=email.find('@');
    string username =  email.substr(0,i);
    cout<<"username is "<<username;
    return 0;

}