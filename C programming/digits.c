#include<stdio.h>
    void sumdigit(int a, int  b);
    void sum();
    int main(){
        int a = 4;
        int b = 7;
        sumdigit(a,b);
        return 0;
    }
        void sumdigit(int a,  int b){
        int sum = a+b;
        printf("final value :%d",sum);
        }
    
