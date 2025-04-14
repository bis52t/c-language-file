#include<stdio.h>
int main(){
    int day;
    printf("Enter days(1-4):");
    scanf("%d",&day);
    switch(day){
    case1 : printf("monday\n");
    break;
    case2 : printf("Tuesday\n");
    break;
    case3 : printf("Wednesday\n");
    break;
    case4 :  printf("Thusday\n");
    break;
    default : printf("not a valid day!\n");
    }
    return 0;
}

