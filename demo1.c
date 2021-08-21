#include<stdio.h>
void gun()
{
	printf("Inside Gun\n");
	int a=10;
	printf("Number is :%d\n",a);
}
void main()
{
    int no=10;
	int *ptr=&no;   
	int b=20;
	long a=10;
	printf("Inside main\n");
	printf("Address of Pointer : %ld\n",&ptr);		//2633732762 Address of pointer
	printf("Size of pointer is : %d\n",sizeof(ptr));	// 8 bytes
	printf("size of int is : %d\n",sizeof(b));		// 4 bytes
	printf("size of long is : %ld\n",sizeof(a));		// 8 bytes
    printf("Address of no is : %ld\n",&no);
	printf(" *ptr :%ld\n",(ptr));
	gun();
}