//////////////////////////////////////////////////////////////////////////
// Problem statement : Dynamic memory allocation demonsate program
// Date				: 31/07/2021
// creator name 	: Rushikesh Dilip Narkhede
// Description : In this program I have create one Dimensional array using malloc
//				and show the values.
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>		//malloc calloc declare in stdlib

int main()
{
	int icnt=0;
	int isize=0;
	int values=0;
	int show=0;
	int *ptr=NULL;		//NULL means 0
	printf("Enter the Element\n");	//step 1
	scanf("%d",&isize);
	
	ptr=(int *)malloc(isize*sizeof(int));	//step 2 : allocate the memory

	// step 3 : use the memory
	printf("Enter Element Values\n");
	for(icnt=0;icnt<isize;icnt++)
	{
		scanf("%d",&ptr[values]);
	//Diplay values of Array
		printf("Enter value is : %d\n",ptr[values]);
	}	
	
	// Deallocate The memory
	free(ptr);

	return 0;
}