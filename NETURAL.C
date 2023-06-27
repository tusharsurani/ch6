#include<stdio.h>
#include<conio.h>
void main()
{
     int number;
     clrscr();
     printf("enter a neutral number =");
     scanf("%d",&number);
     if(number>=1)
   {
     printf("this is the natural number");
   }
    else if(number==0)
   {
    printf("this is the neutral number");
   }
    else if(number<0)
   {
    printf("this is the number of negetive");
   }
   getch();
}