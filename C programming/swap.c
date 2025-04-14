#include<stdio.h>
int main(){
    int x =4 , y =5;
    swap(x,y);
    printf("x = %d & y =%d\n",x,y);
    return 0;
}
void swap(int a, int b){
    int t = a;
    int a = b;
    int b = t;
    printf("a = %d & b =%d\n",a,b);
}