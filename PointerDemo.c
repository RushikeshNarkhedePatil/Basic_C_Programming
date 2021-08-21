/////////////////////////////////////////////////////////////////////
//Name :-Rushikesh Dilip Narkhede
//Date :- 30/07/2021
//Description:- Apan Constant Variable madhali value pointer ne change karu
//              shakato pan te ++ and -- operator ne kami jast karu shakat nahi
//              tyasathi direct value assign karun tyamdhe add karu shakto
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    const int no=10;
    int *p=&no;
    printf("No is:%d\n",no);
    printf("%lu\n",&no);
    *p=13; 
    printf("No is:%lu\n",no);
    *p=177;
    printf("No is:%lu\n",no);
    return 0;
}