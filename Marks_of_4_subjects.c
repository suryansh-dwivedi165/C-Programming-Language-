#include<stdio.h>
int main(){
    int marks1,marks2,marks3,marks4;
    printf("Enter the four marks: ");
    scanf("%d %d %d %d",&marks1,&marks2,&marks3,&marks4);
    int sum = marks1 + marks2 + marks3 + marks4;
    printf("percentage is: %f",sum / 4.0);
    return 0;
} 