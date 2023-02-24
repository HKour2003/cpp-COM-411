#include<iostream>
using namespace std;
struct student
{
 char name[30];
 int rollno;
 char dob[23];
 char branch[45];
 int marks;
    /* data */
};
int main()
{
     student s;
     int i,n;
     cout<<"Enter total entries:";
     cin>>n;
     for(i=0;i<=n;i++)
    {
cout<<"\nEnter data for "<<i+1<<"student"<<endl;
cout<<"Enter full name:";
cin>>s.name;
cout<<"Enter roll no:";
cin>>s.rollno;
cout<<"Enter DOB:";
cin>>s.dob;
cout<<"Enter branch:";
cin>>s.branch;
cout<<"Enter marks:";
cin>>s.marks;

cout<<"\nDisplaying information:"<<endl;
cout<<"Name:"<<s.name<<endl;
cout<<"Roll:"<< s.rollno<<endl;
cout<<"DOB:"<<s.dob<<endl;
cout<<"Branch:"<<s.branch<<endl;
cout<<"marks:"<<s.marks;
    }
return 0;
}
