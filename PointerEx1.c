#include <stdio.h>
///////////////////////////////////////////////////////////////////////////
//Topic Name : pointer Example
//creator name : Rushikesh Dilip Narkhede
//date :    23/07/2021
///////////////////////////////////////////////////////////////////////////

int fun(int a, int b) //dukan
{
    int c = 0;
    c = a + b;
    return c;
}
int main()
{
    int a = 10;
    int b = 20;
    int iRet = 0;
    int *p = &iRet;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int *****z = &y;
    int ******f = &z;
    iRet = fun(a, b);//he iRet tu fun kade ja ani tuzya sobat a ani b la gheun ja ani dukan darala a ani b deun tak ani dukandar je deil te parat gheun ye.
    printf("Addition is : %ld\n", *p);           //  30
    printf("Addition is : %ld\n", **q);           //  30
    printf("Addition is : %ld\n", ***x);           //  30
    printf("Addition is : %ld\n", ****y);           //  30
    printf("Addition is : %ld\n", *****z);           // 30
    printf("Addition is : %ld\n", ******f);           // 30
    printf("Addition is : %ld\n", *p);           // 30
    printf("Address of iRet is : %d\n", &iRet); // 3467586354
    printf("Value of p is : %ld\n", p);          //  3467586354
    printf("Value of *p is : %ld\n", *p);         // 30
    printf("Value of *q is : %ld\n", *q);         // 3467586354
    printf("Value of **y is : %ld\n", **y);        // 354645436
    printf("Value of ***z is : %ld\n", ***z);       // 354645436
    printf("Value of ****f is : %ld\n", ****f);      // 354645436
    printf("Value of ***x is : %ld\n", ***x);       // 30

    printf("------------check address of pointer---------\n");
    printf("The add of p is :%ld\n",&p);
    printf("The add of q is :%ld\n",&q);
    printf("The add of x is :%ld\n",&x);
    printf("The add of y is :%ld\n",&y);
    printf("The add of z is :%ld\n",&z);
    printf("The add of f is :%ld\n",&f);
}