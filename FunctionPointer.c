#include<stdio.h>

int Maximum(int No1,int No2)
{
    if(No1>No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}
int main()
{
    int ivalue1=0,ivalue2=0,iRet=0;
    int (*fp)(int,int)=&Maximum;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);
    // iRet=Maximum(ivalue1,ivalue2);
     iRet=fp(ivalue1,ivalue2);
    printf("Maximum number is :%d\n",iRet);
    return 0;
}