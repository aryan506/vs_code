// #include<bits/stdc++.h>
// using namespace std ;
// // int main (){
// //   string str1;
// //   cout<<"enter the string"<<endl;
// //   cin>>str1;
// //   int n = str1.length() ;

//   void reverseStr(string& str)
// {
//     int n = str.length();
 
  
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }
 
// // Driver program
// int main()
// {
//     string str = "geeksforgeeks";
//     reverseStr(str);
//     cout << str;
//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Geeks";
    // cout<<"enter the string ";
    // cin >>str ;
    string rev = string(str.rbegin(),str.rend());
    cout<<rev<<endl;
    return 0;
}