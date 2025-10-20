#include<stdio.h>
int main(){
   float num;
   printf("Enter the number: ");
   scanf("%f",&num);
   int half = num;
   float fractional = num - half;
   printf("Fractional part is: %f",fractional);
   return 0;
} 