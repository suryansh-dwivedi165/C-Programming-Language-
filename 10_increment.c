#include<stdio.h>
int main(){
    int a = 4,b;
    b = a++ + a++ + a++;
    printf("a = %d b = %d",a,b);
    return 0;
} 