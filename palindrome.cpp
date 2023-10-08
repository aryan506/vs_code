// palidromemeans reverse of a number is equal to the number.
#include <iostream>
using namespace std;
int main()
{
    int r,n,reverse=0,m;
    cout<<"enter the number "<<endl;
    cin>>n;
    m=n;
    
    while (n>0)
    {
          r=n%10;
          n=n/10;
          reverse=reverse*10+r;
    }
    cout<<reverse<<endl;

    if (m==reverse)
    {
          cout<<"this number is a palidrome ";
    }
    else{
        cout<<"this number is not a palidrome";
    }
    
    return 0;
}