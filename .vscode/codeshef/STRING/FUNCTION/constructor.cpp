#include<iostream>
using namespace std;

class Rectangle 
{
private :
    int length;
    int breadth ;

public :
// non parameterized constructor
    Rectangle ()
    {
        length = 2;
        breadth = 2 ;

    }
    
// parametrized constructor
    Rectangle (int l , int b) 
    {
        setLength(l);
        setBreadth(b);
    }
// copy constructor
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
void setLength(int l)
    {
          if (l>0)
          {
            length=l;
          }
          else
          {
            cout<<"length can not be negative "<<endl;
          }    
    }

void setBreadth(int b)
 {
          if (b>0)
          {
            breadth=b;
          }
          else
          {
            cout<<"breadth can not be negative "<<endl;
          }    
    }

int getLength()
    {
        return length ;
    }

int getbreadth()
    {
        return breadth ;
    }
int area()
    {
        return length*breadth;
    }
int perimeter ()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1(10,5);
    cout<<r1.area()<<endl;
    Rectangle r2(r1);   //using of copy constructor to copy the value of r1 to r2
    cout<<"area of r2 is "<<r2.area()<<endl;
}


//         