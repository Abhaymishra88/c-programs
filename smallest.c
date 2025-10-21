#include <stdio.h>
int main() {
   int num1, num2, smallest;
   // Prompt user for input
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   // Determine the smallest number
   if (num1 < num2) {
       smallest = num1;
   } else {
       smallest = num2;
   }
   // Print the result
   printf("The smallest number is: %d\n", smallest);
   return 0;
}