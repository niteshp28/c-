#include<iostream.h>
#include<conio.h>

class time
{
public:
int h1,h2,m1,m2;
int sumofhour;
int sumofminutes;

void Time1()
{
cout<<"Hour1: ";
cin>>h1;
cout<<"Minute1: ";
cin>>m1;
}

void displaytime1()
{
cout<<h1<<":"<<m1<<endl;
}

void time2()
{
cout<<"Hour2: ";
cin>>h2;
cout<<"Minute2: ";
cin>>m2;
}

void displaytime2()
{
cout<<h2<<":"<<m2<<endl;
}

void totaltime(time h , time s)
{d
sumofhour = h.h1 + s.h2;
sumofminutes = h.m1 + s.m2;
}

void displaytotaltime()
{
cout<<"Total time = "<<sumofhour<<":"<<sumofminutes<<endl;
}
};
void main()
{
time t1,t2,t3;
clrscr();
t1.Time1();
t1.displaytime1();
t2.time2();
t2.displaytime2();
t3.totaltime(t1,t2);
t3.displaytotaltime();
getch();
}









