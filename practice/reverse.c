#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i < size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < 5 / 2;i++){
        int temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - 1 - i] = temp;
    }
    for(int i = 0;i < size;i++){
        printf("%d  ", arr[i]);
    }
    return 0;
} 