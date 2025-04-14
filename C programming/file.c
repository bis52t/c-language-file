#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fib.c","r");
    fclose(fptr);
    return 0;
}