#include <stdio.h>


void showarray(int * param,int len)
{
    int i;
    for(i=0;i<len;i++)
    printf("%d", param[i]);
    printf("\n");
}
void addarray(int *param,int len, int add)
{
    int i;
    for(i=0;i<len;i++)
    param[i] += add;

}

int main(void)
{
    int arr[3]={1,2,3};

    addarray(arr,sizeof(arr) / sizeof(int),1);
    showarray(arr,sizeof(arr) / sizeof(int));
    addarray(arr,sizeof(arr) / sizeof(int),2);
    showarray(arr,sizeof(arr) / sizeof(int));
    addarray(arr,sizeof(arr) / sizeof(int),3);
    showarray(arr,sizeof(arr) / sizeof(int));    
    
    
    return 0;
}