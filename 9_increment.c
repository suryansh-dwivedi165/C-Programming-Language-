#include<stdio.h>
int main(){
    int a = 1,b;
    b = a++ + ++a + a++;
    printf("a = %d b = %d",a,b);
    return 0;
}