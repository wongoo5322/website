#include <iostream>
using namespace std;

enum Gender
{
    FEMALE,
    MALE 

};

struct Stuinfo
{
    int num;
    char name[20];

};

int main()
{
    Gender g = FEMALE;
    Stuinfo si = {2,"홍길동"};
    cout<<"성별(0-여성, 1-남성) : "<<g<<endl;
    cout<<"학생번호 : "<<si.num<<"이름"<<si.name<<endl;
    return 0;

}