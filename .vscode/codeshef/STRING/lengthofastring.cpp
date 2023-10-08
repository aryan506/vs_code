// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str;
// cout<<"enter the string "<<endl;
// getline(cin,str);
// cout<<endl;
// cout<<"the string is   "<<str<<endl;
// cout<<"the length of the string is  " <<str.length();
//     return 0;
// }



// using for loop
#include<iostream>
using namespace std ;
int main ()
{
    string str="WELCOME";
    int count=0 ,i;
    for ( i= 0; str[i]!= '\0'; i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}