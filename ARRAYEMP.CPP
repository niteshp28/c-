#include<iostream.h>
#include<conio.h>

class employee
{
int code;
char name[50];
public:
void getdata()
{
cout<<"Enter the code of the employee: ";
cin>>code;
cout<<"Enter the name of the employee: ";
cin>>name;
}
void display()
{
cout<<"The code of the employee is: "<<code<<endl;
cout<<"The name of the employee is: "<<name<<endl;
}
};
void main()
{
employee emp[6];
for(int i=0;i<6;i++)
{
emp[i].getdata();
cout<<endl;
}
for(i=0;i<6;i++)
{
emp[i].display();
cout<<endl;
}
getch();
}






