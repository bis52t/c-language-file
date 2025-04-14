#include<stdio.h>
int main(){
    int array[3][3],b[3][3],c[3][3];
    int i,j,c;
    printf("Enter the number of matrix\n");
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&array[i][j]);

        }
    }
printf("the matrix is \n");
for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("the matrix is \n");
for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
        c[i][j]=array[i][j]+b[i][j];
        

    }
}
printf("the addition is ");
for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
    printf("%d\n",c[i][j]);
}
}
return 0;
}