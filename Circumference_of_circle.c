#include<stdio.h>
#include<math.h>
int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    float circumference = 2 * acos(-1) * radius;
    printf("circumference of circle is: %f",circumference);
    return 0;
}  