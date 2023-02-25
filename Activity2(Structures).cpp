#include<iostream>
using namespace std;
struct employee
{
 char employee_id[20];
 char name[20];
 int houseno;
 char  area[20];
 char city[20];
 char state[20];

    /* data */
};
int main()
{
     employee e;
     int i,n;
     cout<<"Enter total entries";
     cin>>n;
     for(int i=0;i<=n;i++){
        cout<<"enter data for"<< i+1<<"employee"<<endl;

cout<<"Enter employee ID:";
cin>>e.employee_id;
cout<<"Enter name:";
cin>>e.name;
cout<<"Enter house no:";
cin>>e.houseno;
cout<<"Enter area:";
cin>>e.area;
cout<<"Enter city:";
cin>>e.city;
cout<<"Enter state:";
cin>>e.state;

cout<<"\nDisplaying information:"<<endl;
cout<<"Employee ID:"<<e.employee_id<<endl;
cout<<"Name:"<< e.name<<endl;
cout<<"House number:"<<e.houseno<<endl;
cout<<"area:"<<e.area<<endl;
cout<<"city:"<<e.city<<endl;
cout<<"state:"<<e.state;
     }
return 0;
}
