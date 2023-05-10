#include<iostream>
using namespace std;

int r;
void area_circle()
{
    cout<<"Enter the radius of the circle: ";
    cin >> r;
    int area = 3.14*r*r;
    cout <<"The area of circle is : " << area << endl;
}
void area_rectangle()
{
    int l,b;
    cout<<"Enter the length and breadth of the rectangle: ";
    cin >>l>>b;
    int rect=l*b;
    cout<<"The area of rectangle is : " << rect<< endl;
}
void Area_square()
{
    int s;
    cout<<"Enter the sides of the square: ";
    cin >>s;
    int side=s*s;
    cout<<"The area of the square is : " << side<< endl;
}
void Area_traingle()
{
    int b,h;
    cout<<"Enter the base and height of triangle: ";
    cin>>b>>h;
    int trai=b*h/2;
    cout<<"The area of traingle is: "<<trai;
}

int main()
{
    area_rectangle();
    area_circle();   
    Area_square();
    Area_traingle();
    return 0;
}