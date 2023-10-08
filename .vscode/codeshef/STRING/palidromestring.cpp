#include<iostream>
#include<string>
using namespace std ;
int main ()
{              
string str , str2;
cout<<"enter the string "<<endl;
getline(cin,str);

cout<<"The reverse of the string is "<<endl;

string :: reverse_iterator it;
for ( it = str.rbegin(); it!=str.rend(); it++)
{
    str2=*it ;
    cout<<str2;
    
}
cout<<endl;
if (str.compare(str2)==0)
    {
        cout<<"This string is a palindrome string ";
    }
    else
    {
        cout<<"This is not a palindrome string ";
    }
    
   cout<<str2;
    return 0;
}