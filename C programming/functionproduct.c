#include<stdio.h>
void calculate(  int a, int b, int *sum, int *product , int *average);
int main(){
    float a =8;
    float b =9;
    int sum,product,average;
    calculate (a,b,&sum,&product,&average);
    printf("sum =%d,product = %d,average =%d\n",sum,product,average);
    return 0;
}
void calculate(int a,int b,int*sum,int*product,int*average){
*sum = a+b;
*product = a*b;
*average =(a +b)/2;
}


