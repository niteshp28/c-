#include<iostream.h>
#include<conio.h>

void swap(int*x,int*y)
{
int swap;
clrscr();
swap=*x;
*x=*y;
*y=swap;
}
void main(int data)
{
int x=500,y=100;
swap(&x,&y);//passing value to function
cout<<"value of x is: "<<x<<endl;
cout<<"Value of y is: "<<y<<endl;
getch();

}