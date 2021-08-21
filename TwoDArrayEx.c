#include<stdio.h>
int main()
{
    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    printf("Array first value is :%d\n",arr[0][0]);
    printf("Array first value is :%d\n",arr[1][0]);
    printf("Array first value is :%d\n",arr+1);
    printf("Array first value is :%d",&arr[1][3]);
    return 0;
}