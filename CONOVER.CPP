#include<iostream.h>
#include<conio.h>


class construct
{
public:
construct()
{
cout<<"This is a default constructor. "<<endl;
}

construct(int b)
{
cout<<"This is one parameter constructor. "<<endl;
}

construct(int a, int c)
{
cout<<"This is a two parameter constructor."<<endl;
}
};


void main()
{
d
construct o;
construct o1(12);
construct o2(13,14);
getch();
}


