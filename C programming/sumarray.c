#include <stdio.h>
void main(){
    int a[3][3]= {{2,3,4},{5,4,7},{5,4,3}};
    printf("matrix\n");
    for (int i =0;i<3;i++){
        for(int j =0;j<3;j++){
        scanf("%d",a[i][j]);
    }
    }
    printf("upper triangle matrix");
    for (int i =0;i<3;i++){
        for (int j =0;j<=2-i;j++){
            scanf("%d",a[i][j]);
        }
    }
    printf("lower triangle matrix");
    for (int i =0; i<3;i++){
        for (int j =0;j<2-i;j++){
            scanf("%d",a[i][j]);
        }
    }
    return 0;
}
