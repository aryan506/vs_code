#include<iostream>
using namespace std ;
int main()
{
int no1 , no2 , *pointer1 , *pointer2 , sum=0;
cout<<"Enter no.1 and no.2 :";
cin>>no1>>no2;
pointer1 = &no1 ;
pointer2 = &no2 ;
sum = *pointer1 + *pointer2;
cout<<endl;
cout<<"sum of two number is equal to "<<" "<<sum;
return 0 ;
}
