#include<stdio.h>
int main(){
    int calcpercentage(int maths , int hindi, int english);
    int maths = 40;
    int hindi =  39;
    int english =  44;
    printf("Percentage is %d", calcpercentage(maths,hindi,english));
    return 0;
}
int calcpercentage(int maths, int hindi, int english){
return((maths + hindi + english)/3);

}