#include<bits/stdc++.h>
using namespace std ;

int main ()
{
  string str;
  str="aryan";
int i , j ;
j=str.length()-1;
i=0;
while (i<j && i!=j)
{
  swap(str[i],str[j]);
  i++;
  j--;
}
cout<<str;


}