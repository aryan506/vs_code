#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
cout <<"enter number of test cases ";
cin>>t;
while (t--)
{
  int digit;
  cout<<"enter the digit ";
  cin>>digit;
  int sum_of_digit = 0;
  while (digit>0)
  {
   int last_digit= digit%10;
   sum_of_digit = sum_of_digit + last_digit ;
  
  digit=digit/10;
  }
  cout<<"sum of digit  ="<<sum_of_digit<<endl;
}
}

#include<bits/stdc++.h>
using namespace std ;
int main (){
  int t;
      cout<<"enter number of testcases";
      cin>>t;
  while (t--)
  {
  int n;
      cout<<"enter the number ";
      cin>>n;
      int sum_of_number = 0;
  while (n>0)
  {
    int last_num = n%10;
    sum_of_number = sum_of_number + last_num;
    n=n/10;
  }
  cout<<"sum_of_number "<<sum_of_number<<endl;

  }
  
 
}