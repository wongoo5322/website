#include <iostream>
using namespace std;

double carea(double radius, double radian=2*3.14)
{
    return radius*radius*(radian/2);

}

int main()
{
    cout<<"�������� 3�� ���� ���� : ";
    cout<<carea(3)<<endl;
    cout<<"�������� 3�� �ݿ��� ���� :";
    cout<<carea(3,3.14)<<endl;
    return 0;

}