///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name  of Topic :-  Array operations use size of and address operator in array and access the array value
//Name Of Creator :- Rushikesh Dilip Narkhede
//Date                      :- 18/07/2021 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int no;
   int arr[5];
//    int brr=[5]={10,20,30,40,50};
   static int icnt=0;
    printf("Size of No is : %d\n",sizeof(no));  //size of show the size of variable in byte.
    printf("Size of Array is : %d\n",sizeof(arr));  // sizeof of show the size of variable in byte.
    printf("Address of Array is : %d\n",arr);    //array name return the first index address of array
    printf("Address of first index of array : %d\n",&(arr[0])); //array first index and array name return same address
    printf("Address of No is :%p\n",&no);       //address of return the address of particular element
    //Address of array
    printf("Address of array index 3 is : %d\n",&(arr[3]));
    printf("Address of array index 2 is : %d\n",&(arr[2]));
    printf("Address of array index 1 is : %d\n",&(arr[1]));
    printf("Address of array index 4 is : %d\n",&(arr[4]));
    // Access value of array
    //array la jar member intilize kelele nastil tar tya veles array chi value (0 ek tar garbege) asate
    printf("Array First index value is : %d\n",arr[0]);
    printf("Array Second index value is : %d\n",arr[1]);
    printf("Array Third index value is : %d\n",arr[2]);
    printf("Array Forth index value is : %d\n",arr[3]);
    printf("Array Fipth index value is : %d\n",arr[4]);
    arr[2]=22;
    printf("Updated array third index value is :%d\n",arr[2]);

    return 0;
}