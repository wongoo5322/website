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
    Stuinfo si = {2,"ȫ�浿"};
    cout<<"����(0-����, 1-����) : "<<g<<endl;
    cout<<"�л���ȣ : "<<si.num<<"�̸�"<<si.name<<endl;
    return 0;

}