#include<stdio.h>
int main(){
    for (int i=1; i<=30; i++){
        if(i==21){
            break;
        }
        printf("Enter a prime number,,%d\n",i);

    }
    printf("end");
    return 0;
}