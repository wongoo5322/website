/*
int data = 0; //전역 변수

int main()
{
    int data = 0; // 지역변수

    data = 5; //지역 변수에 5 대입
    ::data = 7; //전역 변수에 7 대입
    return 0;

}
*/
#include <iostream>
using namespace std;

namespace DemoLib
{
    struct Stack
    {
         int top;
         int last;
    };
    struct Queue
    {
        int front;
        int rear;
    };
}
//DemoLib 네임 스페이스에 이름을 사용하겠다는 구문
using namespace DemoLib;

namespace DemoB
{
    struct Stack
    {
        int last;
    };
}
int main()
{
    DemoB::Stack s;
    //DemoB::Stack stackb;
    //stacka.top = -1;
    //stackb.last = -1;
    Queue q;
    s.last = -1;
    q.front = q.rear = 0;
    return 0;
}