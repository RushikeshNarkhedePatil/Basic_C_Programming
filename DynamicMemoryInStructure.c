//date 5/8/2021
#include<stdio.h>
#include"Demo.h"
#include<stdlib.h>
#pragma pack(1) // 1 byte chya swarupat memory allocate kar he apan preprocessor la sangto
// preprocessor throwgh conve compiler to allocate momory size in one byte of size
//request compiler through compiler to accocate memory in the sizeof 1 bytes.
// memory allocation will be scricly follow
// using #pragma i have avaid the vatage of three bytes memory.
// structure madhe character aso ya naso #pragma pack(1) lihit chala tyane aplyala sarv memory 
// one one byte chya swarupat milnar.
// computer chya baher run honarya c program la embbeded mhantat

//satic memory allocation

// struct StaticMemoryAllocation
// {
//     int no;
//     float f;
//     double d;
// };
// struct StaticMemoryAllocation obj;  //memory allocate because object created
//boj.no=11;
//obj.f=3.14
//obj.d=5.10;

//Dynamic Memory Allocation
// struct DynamicMemoryInStructure
// {
//     int no;
//     float f;
//     double d;
// };
// struct DynamicMemoryInStructure obj;

// struct DynamicMemoryInStructure *ptr=NULL;
// ptr=(struct DynamicMemoryInStructure *)malloc(sizeof(struct DynamicMemoryAllocation));

// ptr->no=21;
// ptr->f=6.10;
// ptr->d=9.10;
//padding


int main()
{
    
    // struct Demo obj;
    // obj.no=10;
    // obj.f=11.22;
    // obj.ch='M';
    // obj.d=11.22;
    // printf("%d",sizeof(obj));   //d integer define kela tar 16 bytes

     struct Demo obj;
    obj.no=10;
    obj.f=11.22;
    obj.ch='M';
    obj.d=11.22;
       
    printf("%d\n",sizeof(obj));   // d double consider kela tar 24 bytes

   
}
//int no=11;
//char *p=&no;
//printf("%d",*p)