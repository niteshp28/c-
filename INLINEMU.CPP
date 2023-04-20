#include<iostream.h>
#include<conio.h>

inline float mul(float a,float b)
{
return(a*b);
}
void main()
{
float x,y;
cout<<"Enter the value of x: ";
cin>>x;
cout<<"Enter the vlaue of y: ";
cin>>y;
cout<<"The multiplication of x and y is: "<<mul(x,y)<<endl;
getch();
}