#include<stdio.h>
#include<string.h>
int main(){
    char arr[45];
    puts("Enter the String: ");
    gets(arr);
    int i = 0,count = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    printf("Length of string is: %d",strlen(arr));
    return 0;
} 