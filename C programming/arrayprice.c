#include <stdio.h>
int main()
{
    float price[3];
    printf("enter chocolate");
    scanf("%f", &price[0]);
    printf("enter chips");
    scanf("%f", &price[1]);
    printf("enter coke");
    scanf("%f", &price[2]);
    printf("chocolate = %f,chips = %f,coke = %f", price[0] + (0.18 * price[0]), price[0] + (0.18 * price[1]), price[1] + (0.18 * price[2]));
    return 0;
}