#include<stdio.h>
int main(){
    int array[2][2];
    int i,j;
    printf("Enter the number of matrix\n ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&array[i][j]);

        }
    }
    printf("the marrix is:\n ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",array[i][j]);

        }
    }

    return 0;
}