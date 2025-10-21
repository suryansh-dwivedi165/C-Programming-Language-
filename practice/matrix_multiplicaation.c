#include<stdio.h>
int main(){
    int arr[3][3],b[3][3],c[3][3];
    printf("Enter first matrix: \n");
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second matrix: \n ");
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            c[i][j] = 0;
            for(int k = 0;k < 3;k++){
                c[i][j] += arr[i][k] * b[k][j];
            }
        }
    }
        printf("Matrix is: \n");
       for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){
                printf("%d   ",c[i][j]);
            }printf("\n");
        }
    return 0;
} 