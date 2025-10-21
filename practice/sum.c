#include<stdio.h>
int main(){
    int reverse = 0,digit,num,num1;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1 = num;
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number is: %d",reverse);
    return 0;
} 