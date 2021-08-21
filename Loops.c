//////////////////////////////////////////////////////////////////////////////
// Name : Rushikesh Dilip Narkhede
// Date : 13/08/2021
// Day  : Friday
//Description : In this project available example of if else if and switch case
//              and loops do while, while and for loop examples.
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()      //for loop example
{
    int icnt=1;
    for(icnt=1;icnt<5;icnt++)
    {
        printf("jay Ganesh : %d\n",icnt);
    }
}
void WhileLoopEx()  //Example of while loop
{
    int i=0;
    while(i<5)
    {
        printf("Hello While Loop\n");
        i++;
    }
}
void DoWhileEx()    //example of do while loop
{
    int i=0;
    do
    {
        printf("Jay Ganesh\n");
    }while (i>5);
    
}
void TimeTable(int std) //if else if
{
    if(std==1)
    {
        printf("Exam is schedule on : 1Pm\n");
    }
    else if(std==2)
    {
        printf("Exam is schedule on : 12Pm\n");
    }
    else if(std==3)
    {
        printf("Exam is schedule on : 2Pm\n");
    }
    else if(std==4)
    {
        printf("Exam is schedule on : 10Am\n");
    }
    else if(std==5)
    {
        printf("Exam is schedule on : 4Pm\n");
    }
    else{
        printf("There is no standard\n");
    }

}
//in if else statement check all condition line by line.
// switch is intigral constant means only allowd float char int double

void TimeTables(int std)    //using switch case
{                                       /////////////////////////
    switch (std)                        //   jump Table         //
    {                                   //  case    Address     // 
    case 1:                             //  1           56      //
        printf("your Exam is 10am\n");  //  2           59      //
        break;                          //  3           62      //
    case 2:                             //  4           65      //
        printf("your exam is 11am\n");  //  other       69      //
        break;                          //////////////////////////
    case 3:                             
        printf("your exam is 12pm\n");
        break;
    case 4:
        printf("your exam is 1pm\n");
        break;
    
    default:
        printf("There is no standard\n");
        break;
    }
}
//In this example execution of a program is faster as compare the execution of the previous
//program. when we use switch case then Internally one table gets from which is called as jump table
int main()
{
    int ivalue=0,ivalue1=0;
    printf("Enter your standard\n");
    scanf("%d",&ivalue);
     printf("Enter your standard\n");
    scanf("%d",&ivalue1);
    //Display();
    // WhileLoopEx();
    //DoWhileEx();
    TimeTable(ivalue);
    TimeTables(ivalue1);
    return 0;
}
//initiolly if the condition false then while and for llops iterate 0 time
//But incase of do while loop if the condition initilly gives the false value till over loop iterate atleast once.