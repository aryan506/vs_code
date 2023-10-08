/*
         *
         **
         ***
         ****
         DRAW THE PATTERN
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
   int t;
   cout<<"enter number of test cases";
   cin>>t;
  while(t--){
        int n;
        cout<<"enter pattern line size";
        cin>>n;
        for (int i=1 ; i<=n; i++)
        {
        for(int j=1 ; j<=i ; j++){
        cout<<"*";
        }
        cout<<endl;
        }
  }
  return 0;
}