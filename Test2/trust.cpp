#include<iostream>
using namespace std;

enum Subject
{
    KOREAN, ENGLSH, MATH, MAX_SUBJECT
};

enum ScoreConst
{
    DEF_SCORE = -1, MIN_SCORE = 0, MAX_SCORE=100 
};

int main()
{
    //������ ������ ���� ǥ�� ���ԺҰ�
    //�׷��� �Ʒ� ó�� ����ؾ���.
    const char *titles[MAX_SUBJECT] = {"����","����","����"};
    int scores[MAX_SUBJECT]={DEF_SCORE,DEF_SCORE,DEF_SCORE};
    scores[KOREAN] = 90;
    scores[ENGLSH] = MIN_SCORE;
    scores[MATH] = MAX_SCORE;
    
    for(int si = 0; si<MAX_SUBJECT; si++)
    {
        cout<<titles[si]<<":"<<scores[si]<<endl;
    }

}