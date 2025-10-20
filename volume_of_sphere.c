#include<stdio.h>
#include<math.h>
int main(){
    int radius = 5;
    float volume = (4 * acos(-1) * radius * radius * radius) / 3.0;
    printf("volume sphere is: %f",volume);
    return 0;
} 