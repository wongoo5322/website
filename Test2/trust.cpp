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
    //열거형 변수에 정수 표현 대입불가
    //그래서 아래 처럼 사용해야함.
    const char *titles[MAX_SUBJECT] = {"국어","영어","수학"};
    int scores[MAX_SUBJECT]={DEF_SCORE,DEF_SCORE,DEF_SCORE};
    scores[KOREAN] = 90;
    scores[ENGLSH] = MIN_SCORE;
    scores[MATH] = MAX_SCORE;
    
    for(int si = 0; si<MAX_SUBJECT; si++)
    {
        cout<<titles[si]<<":"<<scores[si]<<endl;
    }

}