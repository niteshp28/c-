#include<iostream.h>
#include<conio.h>

const long double feet = 3280.84;
const long double inches = 39370.079;
class distance
{
private:
long double f;
public:

void getdata()
{
cout<<"Enter the distance in km : ";
cin>>f;
}

void putdata()
{
cout<<"The distance in feet is: "<<f*feet<<endl;
cout<<"The distance in inches is: "<<f*inches<<endl;
}

void add(distance s , distance s1)
{
long double x;
 x = s.f*feet + s1.f*feet;
cout<<"The addition of two distances is: "<<x;
}
};

void main()
{
distance d1,d2,d3;
clrscr();
d1.getdata();
d1.putdata();
d2.getdata();d
d3.add(d1,d2);
getch();
}