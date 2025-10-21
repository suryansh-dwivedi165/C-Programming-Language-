#include<stdio.h>
void number(int n){
    printf("%d\t",n);        
    if(n == 0)
        return;
    else
        number(n - 1);
}
int main(){
    number(10);
    return 0;
} 