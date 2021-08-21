//structure inside pointer
#include<stdio.h>
struct Demo
{
    int no;
    int *p;
    float f;
};
int main()
{
    int i=11;
    struct Demo obj;
    obj.no=11;
    obj.p=&i;
    obj.f=3.14;
    printf("%d\n",*obj.p);      //accesss member using pointer
    printf("Size of obj is : %d\n",sizeof(obj));
    return 0;
}
