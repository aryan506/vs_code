#include <iostream>
using namespace std;

int main() {
	int num[10],i,p1,p2,p3,p4,count=0;
	cout<<"enter the value of p1 p2 p3 p4 ";
	cin>>p1>>p2>>p3>>p4;
	if (p1>=10)
    {
	    count=count+1;
	}
	 if (p2>=10)
     {
	   count=count+1;
	} 
	if (p3>=10) 
    {
 count=count+1;
	}
    if (p4>=10)
    {
	   count=count+1;
	}
	cout<<count;
  
	return 0;
}