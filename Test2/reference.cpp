/*
#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int &r = i;//참조 변수는 메모리를 할당하고않는다.
    //참조 변수로 지정하고 지역 변수로 반환하지 말것.
    r = 9;
    cout<<" i:"<<i<<endl;
    return 0;

}
*/
#include <iostream>
using namespace std;

int Add(int &r1, int &r2);
int Add(int i, int j);


int &CalSum(int s, int e);
int main()
{
    int &r1 = CalSum(1,100);
    int &r2 = CalSum(1,10);
    cout<<"r1 = "<<r1<<endl;
    cout<<"r2 = "<<r2<<endl;
    
    int re = 0;
    cout<<"re : "<<re<<endl;
    int a = 2, b = 3;
 
    return 0;

}
int Add(int &r1, int &r2)
{
    return r1+r2;

}
int Add(int i , int j)
{
    return i+j;
}
int &CalSum(int s, int e)
{
     int sum = 0;
    for ( ; s<=e; s++)
    {
        
        sum += s;
    }
    return sum;
}