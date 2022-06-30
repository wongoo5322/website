#include<iostream>
using namespace std;

int CalculateArea(int width, int height)
{
    return width*height;

}
int CalculateArea(int width, int height, bool)
{
    return width*height/2;

}
int main()
{
    cout<<"»ç°¢ÇüÀÇ ³ÐÀÌ : ";
    cout<<CalculateArea(3,4)<<endl;
    cout<<"»ï°¢ÇüÀÇ ³ÐÀÌ : ";
    cout<<CalculateArea(3,4,1);
    return 0;

}
