#include<iostream>
using namespace std;
int main()
{
    int base,height, hypotenuse;
    int area,perimeter;
    base=10;
    height=7;
    hypotenuse=12;
    area=0.5*base*height;
    
    perimeter=base+ height+ hypotenuse;
    cout<<"the area of a triangle is:"<<area;
    cout<<"the perimiter of the triangle:"<<perimeter;
    return 0;

}