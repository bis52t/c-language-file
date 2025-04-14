#include<stdio.h>
int main(){
    float principal,rate,time,simple_interest,compound_interest;
    printf("Enter thr principal amount:");
    scanf("%f",&principal);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    printf("Enter the time in years:");
    scanf("%f",&time);
    simple_interest = (principal * rate * time)/100;
    printf("Simple interest:%.2f\n",simple_interest);
    compound_interest = principal * (pow((1 + rate /100),time) ) -  principal;
    printf("Compound inerest:%.2f\n",compound_interest);
    return 0;
}