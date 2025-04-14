#include<stdio.h>
void main(){
    int a [3][3] = { {2,4,5} , {6,8,9}, {5,3,5}};
    int i,j;
    printf("matrix\n");
    for (int i =0; i<3;i++){    
    for (int j = 0;j<3; i++){
    printf("%d\n",& a[i][j]);
    }
    }
    printf("upper triangle matrix");
    for (int i = 0; i<3;i++){
        for (int j = 0;j<=2-i;j++){
            printf("%d\n",a[i][j]);
        }
    }
    printf("lower triangle matrix");
    for (int i = 0; i<3;i++){
        for (int j = 2-i;j<3;j++){
            printf("%d\n",a[i][j]);

        }

        }
        return 0;
    }

