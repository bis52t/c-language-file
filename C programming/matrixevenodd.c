#include<stdio.h>
int main(){
    int even,odd;
    printf("entter the even number ");
    for(int i=0;i<=8;i++){
        if(i%2==0){
            printf("%d even number \n",i);

        }else{
            printf("%d odd number \n",i);
        }

    }
    return 0;
}