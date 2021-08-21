#include<stdio.h>
//Global Variable Declaration
int global=10;		//auto only applicable in local variable

int XYZ( int a)	//XYZ Dukanach nav int a dukandarach bhand
{
	int i; 	//auto
	auto int d=10;	//auto
	auto int j;	//garbage
	auto int p=10;	//auto
	
	int c=a+global;
	printf("Address of A : %p\n",&a);	//%p apan address show karnyasathi use karto ani (&) address operator deun veriable 							ch nav dyav mhanje aplyala tya variable cha address milel
	printf("Address of c : %p\n",&c);
	printf("Address of global : %p\n",&global);
	
	return c;
}
int main()		//Aapal Ghar
{
	//Local Variable Declaration
	int res=0;
	int bhand1=40;
	
	res=XYZ(bhand1);
	printf("Final Output is : %d",res);
	
}
