#include<stdio.h>
int main(){
    int num,reverse = 0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num1 = num;
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(reverse == num1)
        printf("Palindrom number ");
    else   
        printf("Not palindrom number");
    return 0;
} 