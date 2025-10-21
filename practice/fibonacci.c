#include<stdio.h>
int main(){
    int n1 = 0,n2 = 1,num,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0;i < num - 2;i++){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    if(num == 1) num = 0;
    else if(num == 2) num = 1;
    if(num == 0 || num == 1)
        printf("Fibonacci series is: %d\n",num);
    else
        printf("Fibonacci series is: %d",sum);
    return 0;
} 