// Date 6/8/2021
// we can create a pointer of same structure inside that structure.
//the above type of structure is called self referencial structure.
//consider below syntax of linked list creation.

#include<stdio.h>
struct Demo
{
    int x;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
    struct Demo *p=&obj1;

    obj1.x=11;
    obj2.x=21;
    obj3.x=51;

    obj1.ptr=&obj2;
    obj2.ptr=&obj3;
    obj3.ptr=NULL;

    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",p->x);
    printf("%d\n",p->ptr->x);
    printf("%d\n",p->ptr->ptr->x);   
}