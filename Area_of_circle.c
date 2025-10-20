#include<stdio.h>
#include<math.h>
// Area of circle
int main(){
    int radius;
    printf("Enter the radius: ");\
    scanf("%d",&radius);
    float area = acos(-1) * radius * radius; 
    printf("Area of circle is: %f",area);
    return 0;
} 