#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a > b){
        int rem = a % b;
        printf("Remainder is: %d",rem);
    }    
    return 0;
} 