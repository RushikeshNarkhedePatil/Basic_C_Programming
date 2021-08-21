#include<stdio.h>

void fun()
{
	puts("First Hello World Program Using Puts Function"); // in puts function no need to write \n because end of the string 									function provide new line implisitly.
	printf("First Hello World Program Using Printf Function"); //but using printf after ending string user can press \n for 										new line.
}
int main(void)	// void mean he function kontihi value return karnar nahi
{
	fun();	//function calling
}
