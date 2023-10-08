#include<iostream>
using namespace std;
int main()
{
int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;
cout<<"enter row and columb of first matrix"<<endl;
cin>>r1>>c1;
cout<<"enter row and columb of second matrix"<<endl;
cin>>r2>>c2;
if (c1!=r2)
{
    cout<<"cannot be multiplied";
    return 0;
}
cout<<endl;
cout<<"enter the element of first matrix"<<endl;
for ( i = 0; i < r1; i++)
{
     for ( j = 0; j < c1; j++)
    {
        cout<<"enter the element a"<<i+1<<j+1<<"    ";
        cin>>a[i][j];
    }
    
}

for ( i = 0; i < r2; i++)
{
     for ( j = 0; j < c2; j++)
    {
        cout<<"enter the element b"<<i+1<<j+1<<"    ";
        cin>>b[i][j];
    }
    
}
cout<<"The first matrix is "<<endl;


for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c1; j++)
    {
    cout<<a[i][j]<<"    ";
    }
   cout<<endl<<endl;
}

cout<<endl;
cout<<"The second matrix is "<<endl;
for ( i = 0; i < r2; i++)
{
    for ( j = 0; j < c2; j++)
    {
    cout<<b[i][j]<<"    ";
    }
   cout<<endl<<endl;
}
 
//  MULTIPLICATION OF MATRIX
 
 for ( i = 0; i < r1; i++)
    for ( j = 0; j < c2; j++)
    {
        for ( k = 0; k <c1 ; k++)
        {
            mul[i][j]=0;
          mul[i][j]=mul[i][j]+a[i][k]*b[k][j];  
        }
        
    }
    

 
 cout<<"multiplication of two matrix is ...."<<endl;

 for ( i = 0; i < r1; i++)
 {
    for ( j = 0; j < c2; j++)
    {
        cout<<mul[i][j]<<"  ";
    }
    cout<<endl;
 }
return 0;    
}