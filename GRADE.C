#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    clrscr();
    printf("enter your marks=");
    scanf("%d",&marks);

    if(marks<0 && marks>100)
   {
    printf("wrong entry");
   }


    else if(marks>=90)
   {
    printf("grade A+");
   }


    else if(marks<90 && marks>=80)
   {
    printf("grade A");
   }


    else if(marks<80 && marks>=70)
   {
    printf("grade B");
   }


    else if(marks<70 && marks>=60)
   {
    printf("grade C");
   }


    else if(marks<60 && marks>=50)
   {
    printf("grade D");
   }

    else if(marks<50 && marks>=32)
   {
    printf("grade E");
   }

    else if(marks<32)
   {
    printf("sorry you are fail good luck you will pass next year ");
   }
   getch();

}