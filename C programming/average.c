#include<stdio.h>
int main(){
    int a,b,c,sum;
    float average;
    printf("Enter a value of a");
    scanf("%d",&a);
    printf("Enter a value of b");
    scanf("%d",&b);
    printf("Enter a value of c");
    scanf("%d",&c);
    sum  = a+b+c;
    average = sum /3;
    printf ("Sum of a,b,c,%d/n");
    printf ("Average %d/n");
    return 0;

}