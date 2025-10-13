// WAP that takes two operands and one operator from the user, perform the operation, prints the result by using Switch statement. 
#include<stdio.h>
int main ()
{
   int N,a,b;
   printf("press 1 for addition\n press 2 for subtraction\n press 3 for multipication\n press 4 for division");
   scanf("%d",&N);
   printf("Now enter your two numbers=");
   scanf("%d%d",&a,&b);
   switch(N)
   {
       case 1:
       printf("addition of %d & %d=%d",a,b,a+b);
       break;
       case 2:
       printf("subtraction of %d & %d=%d",a,b,a-b);
       break;
       case 3:
       printf("multipication of %d & %d=%d",a,b,a*b);
       break;
       case 4:
       if(b==0)
       {
           printf("division is not possiable");
       }
       else
       {
           printf("division of %d & %d=%.2f",a,b,(float)a/b);
           
       }
       break;
       default:
       printf("please select numbers bitween 1 to 4");
   }
}