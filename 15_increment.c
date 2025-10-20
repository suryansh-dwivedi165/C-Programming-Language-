#include<stdio.h>
int main(){
    int a = 2,b = 3,c;
    c = a++ + ++b + --a + b--;
    printf("a = %d b = %d c = %d",a,b,c);
    return 0;
} 