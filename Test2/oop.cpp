#include<iostream>
#include<string>
using namespace std;

class Student 
{
    //�ɹ� �ʵ�(������)
    int num;
    string name;
    int iq;
    public:
    //�ɹ� �޼���(���)
    Student(int num,string name)//������ �޼���
    {
        this->num = num;//this�� �ڱ��ڽ��� ����Ű�� ������
        this->name = name;//�ַ� �ɹ� ������ �ʱ�ȭ�Ҷ� ���
        this->iq = 100;
    }
    void Study()
    {
        cout<<name<<"����"<<endl;
        iq++;
    }
    void View()
    {
        cout<<"��ȣ : "<<num<<"�̸� : "<<name<<"����ť"<<iq<<endl;
    }
};
int main()
{
    Student *stu = new Student(3,"ȫ�浿");
    stu->Study();
    stu->View();
    delete stu;
    return 0;
}