#include<iostream>
#include<conio.h>
using namespace std;

class over
{
public:
int get(int,int,int);
float get(float,float,float);
};
int over::get(int a,int b,int c)
{
if(a>b&&a>c)
return a;
else
{
if(b>a&&b>c)
return b;
else
return c;
}
}
float over::get(float a,float b,float c)
{
if(a>b&&a>c)
return a;
else
{
if(b>a&&b>c)
return b;
else
return c;
}
}
int main()
{
int n1,n2,n3,t;
float x,y,z;
over obj;
::cout<<"\nEnter three integer number: ";
cin>>n1>>n2>>n3;
t=obj.get(n1,n2,n3);
::cout<<"maximum number is:" <<t;
::cout<<"\nEnter three float number: ";
cin>>x>>y>>z;
float temp=obj.get(x,y,z);
cout<<"maximum number is:"<<temp ;
}