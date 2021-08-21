#include<stdio.h>
//Netsted structure using structure object

// struct Hello
// {
//     int i;
//     float d;
// };
// struct Demo
// {
//     int x;
//     int y;
//     struct Hello hobj;
// };
// int main()
// {
//     struct Demo obj;
//     obj.hobj.i=11;
//     printf("Value of Hello Structure : %d\n",obj.hobj.i);
//     printf("Size of structure : %ld\n",sizeof(obj));
// }

//we can create structure inside structure called as nested structure

struct Demo
{
//    struct Hello        // apan ethe demo navachya structure madhe structure
//    {                   // create kel ahe hello navach pan aplya ya syntax nusar
//        int i;          // apan Hello madhe kahihi initilise karu shaknar nahi
//        float d;        // karan apan ethe Hello cha object create kelela nahi
//    };                  // tyamule hello la actual memory hi allocate zalich nahi.

    struct Hello
    {
        int i;
        float d;
    }hobj;      //ata apan ya structure chi memory vaparu shakato karan ata
                // ya madhe apan hello hobj cha emigiate object create kela ani
                // ani hello chya structure la memory allocate zali.
    int x;
    int y;
    // struct Hello hobj;
};
int main()
{
    struct Demo obj;
    obj.hobj.i=11;
    printf("Value of Hello Structure : %d\n",obj.hobj.i);
    printf("Size of structure : %ld\n",sizeof(obj));
}