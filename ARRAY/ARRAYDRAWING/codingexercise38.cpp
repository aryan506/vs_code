#include<iostream>
using namespace std ;
int main()
{
    int i,j,n;
    cout<<"enter the value of n  ";
    cin>>n;
    cout<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
// Question no 38            
//             if (i>=j)
//             {
//                 cout<<" * ";
//             }
            




// question no 39             if (i>j)
            // {
            //     cout<<" ";
            // }
            // else{
            //     cout<<"*";
            // }
            


//  question no 40.
            // if (i+j<n-1)
            // {
            //     cout<<"   ";
            // }   
            // else{
            //     cout<<" * ";
            // }





// QUESTION NO. 41           
if (i+j<=n-1)
{
    cout<<" *";
}
 
        }
        cout<<endl;
    }
    
    return 0;
}