#include<iostream>
using namespace std;

bool isevennumber(int num);

int main()// void main() <-- c++�� ���������ʴ�.
{           //c++�� �ȵǴ°��� MinGW�����Ϸ��� �ȵǴ°���
    bool check = false;
    int num = 0;

    cout<<"�ƹ� ���� �Է��ϼ���."<<endl;
    cin>>num;

    check = isevennumber(num);//���������� ���ܿ���.
    if(check)
    {
        cout<<num<<"¦�� �Դϴ�."<<endl;
    }    
        else
        {
            cout<<num<<"Ȧ�� �Դϴ�"<<endl;
        }
    
    return 0;
}
bool isevennumber(int num)
{
    return (num%2)==0;
}
//���带 ������ �ϰԵǸ� ����� ������ ������ ���.
//�� ������ ���带 �ϸ鼭 ���������� �����ϴµ� ���带 �����ؼ�
//�ϴٺ��� �̷� exe�������ϵ��� �Ȳ����� ��� ��ø�Ǳ� ����.
//�ذ� ����� �۾������� ���μ������� ���������� ��������ָ� �ȴ�.
