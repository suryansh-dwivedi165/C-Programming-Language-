#include<stdio.h>
int main(){
    int x = 7,y;
    y = x++ + x++ + ++x + x;
    printf("x = %d y = %d",x,y);
    return 0;
} 