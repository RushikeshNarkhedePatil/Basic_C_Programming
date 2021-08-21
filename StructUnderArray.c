// date 6/8/2021
//inside structure we can create array.

#include<stdio.h>
struct Demo
{
    int no;
    // int arr[4];
    float f;
};

int main()
{
    int icnt=0;
    // struct Demo obj;
    // obj.no=11;
    // obj.f=3.14;
    // obj.arr[0]=10;
    // obj.arr[1]=20;
    // obj.arr[2]=30;
    // obj.arr[3]=40;
    // obj.arr[4]=50;

    struct Demo obj[3];
    obj[0].no=11;
    obj[0].f=3.14;
    obj[1].no=10;
    obj[1].f=3.60;
    obj[2].no=20;
    obj[2].f=3.88;
    for(icnt=0;icnt<3;icnt++)
    {
        printf("Array no Values : %d\n",obj[icnt].no);
        printf("Array F value is : %f\n",obj[icnt].f);
    }

    printf("Size of obj is : %d\n",sizeof(obj));   //24
}