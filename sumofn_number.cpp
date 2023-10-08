// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,s;
//     cout<<"enter the first n number for sum"<<endl;
//     cin>>n;
//      s=(n*(n+1))/2;
//      cout<<s;
//     return 0;
// }




// using loop

#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter n "<<endl;
    cin>>n;
    for ( i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<"sum of first "<< n << " number is "<<sum<<endl;
    
    return 0;
}