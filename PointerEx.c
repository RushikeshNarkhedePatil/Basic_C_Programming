#include<stdio.h>
///////////////////////////////////////////////////////////////////////////
//Topic Name : pointer Example
//creator name : Rushikesh Dilip Narkhede
//date :    23/07/2021
///////////////////////////////////////////////////////////////////////////

int fun(int a, int b)
{
    int c=0;
    c=a+b;
    return c;    
}
int main()
{
    int a=10;
    int b=20;
    int iRet=0;
    int *p=&iRet;
    iRet=fun(a,b);
    printf("Addition is : %d\n",*p);                //30
    printf("Address of iRet is : %d\n",&iRet); //43554333265
    printf("Addition is : %d\n",p);            //43554333265
}