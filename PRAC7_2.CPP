#include<iostream.h>
#include<conio.h>

class student
{
private:
static int id;
static char name [30];
public:
void static getdata();
void static putdata();
};

int student :: id = 0;
char student :: name[30];
void student:: getdata()
{
cout<<"Enter the id of the student: ";
cin>>id;
cout<<"Enter the name of the student: ";
cin>>name;
}
void student :: putdata()
{
cout<<"The id of the student is : "<<id<<endl;
cout<<"The name of the student is: "<<name<<endl;
}
void main()
{
student s1;
clrscr();
s1.getdata();
s1.putdata();
getch();
}
