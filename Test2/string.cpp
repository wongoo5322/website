#include<iostream>
using namespace std;

int main ()
{
    string s = "hello";
    string s2 = "hello";
    string s3;
    

    if(s==s2)
    {
        cout<<"����"<<endl;    
    }
    else
    {
        cout<<"�ٸ���"<<endl;
    }
    s3 = s;
    cout<<"s3 is "<<s3<<endl;
    return 0;
}