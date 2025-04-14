#include<stdio.h>
void  calculateprice(float value);
int main(){
    float value = 100.00;
    calculateprice(value);
    return 0;
}
    void calculateprice(float value){
        value = value +(0.15*value);
        printf("final value is :%f",value);
    }

    
