#include<stdio.h>
int main(){
    int *array;
    int size;
    array = (int*) malloc (size * (sizeof(int)));
    printf("enter the size of an array ");
    scanf("%d\n",&size);
    for (int i = 0; i <size; i++){
        array[i] = i+1;
    }
    printf("array element are");
    for (int i = 0; i <size; i++){
    printf("%d",array[i]);
    }
    free(array);
    return 0;



}