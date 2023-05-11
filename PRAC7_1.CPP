#include<iostream.h>
#include<conio.h>

class cou
{
public:
static int a;
static void count();
};
int cou:: a=0;
void cou:: count()
{
for(int i=0;i<=3;i++)
{
int coun = a;
a++;
cout<<"The numbers are "<<coun<<endl;
}
}
void main()
{
cou s;
clrscr();
s.count();
getch();
}
