#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float*) malloc (5*(sizeof(float)));
    ptr [0] = 5;
    ptr [1] = 3;
    ptr [2] = 4;
    ptr [3] = 7;
    ptr [4] = 1;
    for (int i = 0; i<5; i++){
         printf("%f\n",ptr[i]);
    }
    return 0;
}