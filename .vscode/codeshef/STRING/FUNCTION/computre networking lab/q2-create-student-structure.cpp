#include<iostream>
using namespace std ;
struct student 
{
int roll;
string name;
int subject[3];
};
void input (student *p)
{
    cout<<"enter the name "<<endl;
    cin>>p->name;
    cout<<"enter the roll number "<<endl;
    cin>>p->roll;
    cout<<"enter the marks "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>p->subject[i];
    }
    
}

void output(student *p)

{
    cout<<endl;
    cout<<"Name"<<"  "<<p->name;
    cout<<"Roll"<<"  "<<p->roll<<endl;
    cout<<"marks";
    for (int i = 0; i < 3; i++)
    {
        cout<<p->subject[i]<<"  ";
    }
    
}

int main (){
    student *p,student;
    p=&student;
    input(p);
    output(p);
}