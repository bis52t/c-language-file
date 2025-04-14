#include<stdio.h>
#include<math.h>
float square(float side);
float circle(float radius);
float rectangle(float a, float b);
    int main(){
        float a = 4.00;
        float b = 8.00;
        float side = 8.00;
        printf("%f",rectangle(a,b));
        return 0;
    }
    float square(float side){
        return 0;
    }
    float circle(float radius){
        return 3.14*radius*radius;
    }
    float rectangle(float a,float b){
        return a*b;
    }
    float square(float side){
        return side*side;
    }

