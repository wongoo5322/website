#include<iostream>
using namespace std;

bool isevennumber(int num);

int main()// void main() <-- c++은 가능하지않다.
{           //c++이 안되는건지 MinGW컴파일러가 안되는건지
    bool check = false;
    int num = 0;

    cout<<"아무 수나 입력하세요."<<endl;
    cin>>num;

    check = isevennumber(num);//지역변수로 땡겨오기.
    if(check)
    {
        cout<<num<<"짝수 입니다."<<endl;
    }    
        else
        {
            cout<<num<<"홀수 입니다"<<endl;
        }
    
    return 0;
}
bool isevennumber(int num)
{
    return (num%2)==0;
}
//빌드를 여러번 하게되면 빌드는 되지만 에러가 뜬다.
//그 이유는 빌드를 하면서 실행파일을 생성하는데 빌드를 연속해서
//하다보면 이런 exe실행파일들이 안꺼지고 계속 중첩되기 때문.
//해결 방법은 작업관리자 프로세스에서 실행파일을 종료시켜주면 된다.
