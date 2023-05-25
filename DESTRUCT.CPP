#include<iostream.h>
#include<conio.h>

class destruct
{
public:
destruct()
{
cout<<"constructor called. "<<endl;
}

~destruct()
{
cout<<"Destructor called."<<endl;
}
};
void main()
{
clrscr();
{
destruct();
}
getch();
}