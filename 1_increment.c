#include<stdio.h>
int main(){
    int a = 5,b;
    b = ++a + a++;
    printf("a = %d b = %d",a,b);
    return 0;
} 