#include<iostream.h>
#include<conio.h>

struct college_info
{
char college_name[30];
long int college_code;
int no_of_dept;
};
void main()
{
college_info c={"RCTI",227040,5};
clrscr();
cout<<"Name of the college: "<<c.college_name<<endl;
cout<<"College Code: "<<c.college_code<<endl;
cout<<"Departments in College: "<<c.no_of_dept<<endl;
getch();
}


