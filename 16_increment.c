#include<stdio.h>
int main(){
    int a = 4,b = 5,c;
    c = a++ + ++a + b-- +--b;
    printf("a = %d b = %d c = %d",a,b,c);
    return 0;
}