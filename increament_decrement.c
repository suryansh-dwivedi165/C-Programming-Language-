#include<Stdio.h>
int main(){
    int x = 5,y = 2,z;
    z = x++ + ++x * --y + y++ + --x + x-- * ++y;
    printf("%d\n",z);
    printf("%d %d",x,y);
    return 0;
} 