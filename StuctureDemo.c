#include<stdio.h>
struct StuctureDemo     //structure declaration
{
    int no;
    float f;
    double d;
    char c;
};
void fun()
{
    struct StuctureDemo obj;
    obj.no=22;
    obj.f=55.77;
    obj.d=66.00876;
    printf("Print the value of object %d\n %f\n %lf\n",obj.no,obj.f,obj.d);
}
int main()
{
   struct StuctureDemo obj;
   obj.no=11;
   obj.f=33.22;
   obj.d=33.554343344;
   printf("OBJ %d\n",obj.no);
   printf("OBJ %f\n",obj.f);
   printf("OBJ %lf\n",obj.d);
   fun();

   printf("size of obj.c is : %d\n",sizeof(obj.c));
   printf("size of obj.d is : %d\n",sizeof(obj.d));
   printf("size of obj.no is : %d\n",sizeof(obj.no));
   printf("size of obj.f is : %d\n",sizeof(obj.f));
   printf("size of obj is : %d\n",sizeof(obj));
}

