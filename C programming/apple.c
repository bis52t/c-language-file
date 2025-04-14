#include<stdio.h>
#include<stdlib.h>
int main(){
    int a [18][10], b [23][12];
    int rows,cols;
    printf("Enter the  number of rows");
    scanf("%d\n",&rows);;
    printf("Enter the number of cols");
    scanf("%d\n",&cols);
    printf("enter the elements of the first matrix");
    for (int i =rows; i<rows; i++){
        for (int j = cols; j<cols ; j++){
            scanf("%d\n",& a[i][j]);
        }
    }
    printf("enter the elements of the second matrix");
    for (int i =rows; i<rows; i++){
        for (int j = cols; j<cols ; j++){
            scanf("%d\n",& b[i][j]);
        }
    }
    
    return 0;

}