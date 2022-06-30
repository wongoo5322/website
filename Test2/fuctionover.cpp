#include <iostream>
using namespace std;
int getmax(int a,int b)
{
    cout<<"int getmax(int a,int b)"<<endl;
    if(a>b)
    {
        return a;
    }
      return b;
}

char getmax(char a, char b)
{
    cout<<"char getmax(char a, char b)"<<endl;
    if(a>b)
    {
        return a;

    }
    return b;
}
int main()
{
    cout<<getmax(2,3)


}