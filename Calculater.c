// Online C compiler to run C program online
#include <stdio.h>
//#include <conio.h>

int main() {
	float a;
    float b;
    float sum;
    float sub;
    float mul;
    float div;
    int t;
    
   printf("**Your Calculator**\n");
   
   printf("Enter 1 for Additon \n");
   printf("Enter 2 for Subtraction\n");
   printf("Enter 3 for Multiplication \n");
   printf("Enter 4 for Division\n");
   printf("***********\n");
   
   
   printf("\nEnter Your number for Calculation :");
   scanf("%d",&t);
   printf("\nEnter First number :");
   scanf("%f", &a);
   printf("\nEnter Second number :");
   scanf("%f", &b);
  if(t == 1){
   float sum = (float)a+b;
   printf("Sum of two number is: %.1f", sum);
   }
   if(t == 2){
   sub = a-b;
   printf("Subtraction of two number is: %.1f", sub);
   }
   if(t == 3){
   mul = a*b;
   printf("Multipication of two number is: %.1f", mul);
   }
   if(t == 4){
   float div = (float)a/b;
   printf("Division of two number is: %.1f", div);
   }
  return 0;
}