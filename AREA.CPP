#include<iostream.h>
#include<conio.h>

double areac(int circle)
{
double area=3.14*circle*circle;
return area;
}
void main()
{
int circle;
clrscr();
cout<<"Enter the area of circle: ";
cin>>circle;
cout<<areac(circle);
getch();
}