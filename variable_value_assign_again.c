#include<stdio.h>
int main(){
    int value = 45; // Valueassign first time
    printf("Value is: %d\n",value);
    value = 89;         // value overwrite 
    printf("Value is: %d",value);
    value = 89;         // value overwrite again
    printf("%d",value);
    return 0;
}  