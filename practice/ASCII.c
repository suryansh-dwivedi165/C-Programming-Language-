#include<stdio.h>
int main(){
    char arr[20];
    printf("Enter the string is: ");
    scanf("%^[\n]s",arr);
    printf("%s",arr);
    return 0;
} 