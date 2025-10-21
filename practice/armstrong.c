#include<stdio.h>
int main(){
    int num,digit,reverse = 0,num1;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1 = num;
    while(num != 0){
        digit = num % 10;
        reverse = reverse + (digit * digit * digit);
        num = num / 10;
    }
    if(num1 == reverse){
        printf("Number is Armstrong");
    }else{
        printf("Number is not armstrong");
    }
    return 0;
} 