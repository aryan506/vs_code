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
    // cout<<reverse<<endl;

while (reverse>0)
{
   r=reverse%10;
   reverse=reverse/10;
 
   switch (r)
   {
   case 1:
      cout<<"one"<<endl;
       break;
   case 2:
   cout<<"two"<<endl;
   break;
   case 3:
   cout<<"three"<<endl;
   break;
   case 4:
   cout<<"four"<<endl;
   break;
   case 5:
   cout<<"five"<<endl;
   break;
   case 6:
   cout<<"six"<<endl;
   break;
       
   
   default:
   cout<<"error";
       break;
         cout<<r<<endl;
   }
}

    return 0;
}