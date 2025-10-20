#include<stdio.h>
int main(){
    int a,b = 1;
    a = ++b + ++b;
    printf("%d",a);
    return 0;
} 