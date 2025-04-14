#include<stdio.h>
int main(){
    int grades,marks;
    printf("Enter the grades");
    scanf("%d",&marks);
    if(marks<30){
        printf("student grade is C\n");
    }
        else if (marks >=30&& marks <70){
            printf("student grade is B\n");
        }
        else if( marks>=70 && marks <90){
            printf("student grade is A\n");
        }
            else{
                printf("student grade is A++");
            }
        }

        