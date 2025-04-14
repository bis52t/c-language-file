#include<stdio.h>
int main(){
    int  natural;
    printf("Enter a natural number");
    scanf("%d",natural);
    if(natural >= 1 && natural <=100){
        printf("Natural number");
    }else{
        printf(" error : the number is not in valid range");

    }
    return 0;
    }

