#include<stdio.h>

int main() {
   int num1;
   int num2;

   printf("Please enter two numbers.\n");
   scanf("%d %d", &num1, &num2);

   printf("Your numbers were %d and %d\n", num1, num2);
   printf("Sum: %d\n", num1 + num2);
   printf("Difference: %d\n", num1 - num2);
   printf("Product: %d\n", num1 * num2);
   printf("Division: %d\n", num1 / num2);
   printf("Remainder: %d\n", num1 % num2);

   return(0);
}
