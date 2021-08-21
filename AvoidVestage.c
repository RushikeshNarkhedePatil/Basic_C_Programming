#include<stdio.h>
#pragma pack(1)

struct Date1
{
    int Day;    //4byte
    int Month;  //4 byte
    int Year;   //4 byte
                //total 12 bytes
};
struct Date2
{
    int Day:5;
    int Month:4;
    int Year:15;
};
int main()
{
    struct Date1 obj1;
    struct Date2 obj2;

    printf("%d\n",&obj1);
    printf("%d\n",&obj2);
    //printf("%d\n",&obj2.Day);     //not allowd
}