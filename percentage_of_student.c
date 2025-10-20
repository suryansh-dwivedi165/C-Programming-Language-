#include<stdio.h>
int main(){
    int marks1,marks2,marks3,marks4,marks5;
    printf("Enter five marks: ");
    scanf("%d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5);
    int sum = marks1 + marks2 + marks3 + marks4 + marks5;
    float per = sum / (float) 5;
    printf("Percentage of 5 students: %f",per);
    return 0;
} 