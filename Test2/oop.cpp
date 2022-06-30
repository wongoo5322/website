#include<iostream>
#include<string>
using namespace std;

class Student 
{
    //맴버 필드(데이터)
    int num;
    string name;
    int iq;
    public:
    //맴버 메서드(기능)
    Student(int num,string name)//생성자 메서드
    {
        this->num = num;//this는 자기자신을 가르키는 포인터
        this->name = name;//주로 맴버 변수를 초기화할때 사용
        this->iq = 100;
    }
    void Study()
    {
        cout<<name<<"공부"<<endl;
        iq++;
    }
    void View()
    {
        cout<<"번호 : "<<num<<"이름 : "<<name<<"아이큐"<<iq<<endl;
    }
};
int main()
{
    Student *stu = new Student(3,"홍길동");
    stu->Study();
    stu->View();
    delete stu;
    return 0;
}