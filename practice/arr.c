#include<stdio.h>
int main(){
    int arr[3],sum = 0;
    printf("Enter the number: ");
    for(int i = 0;i < 3;i++)
        scanf("%d",&arr[i]);
    for(int i = 0;i < 3;i++){
        sum += arr[i];
    }    
    printf("Sum is: %d",sum);
    return 0;
} 