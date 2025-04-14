#include<stdio.h>
int main(){
    int fib(int n);
    printf("%d",fib(8));
    return 0;
}
int fib(int n){
    if (n ==2){
    return 1;
    }
    if (n == 1){
        return 0;
    }
    int fibNm2 = fib(n -2);
    int fibNm1 = fib(n-1);
    int finbN = fibNm2 + fibNm1;
    printf("Fib value :%d\n",n );
    return 0;
}






    
}

