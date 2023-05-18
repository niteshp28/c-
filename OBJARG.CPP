#include<iostream.h>
#include<conio.h>

const feet = 30.48;
const inches = 2.54;
class distance
{
public:
int f;

void getdata()
{
cout<<"Enter the distance : ";
cin>>f;
}

void putdata()
{
cout<<"The distance in feet is: "<<f*feet<<endl;
cout<<"The distance in inches is: "<<f*inches<<endl;
}

void add(distance s)
{
int x;
 x = s.f*feet + s.f*inches;
cout<<x;
};

void main()
{
distance d1,d2;
d1.getdata();
d1.putdata();
d2.add(d1);
getch();
}
