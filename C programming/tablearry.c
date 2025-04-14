#include<stdio.h>
void table(int arr[][10],int a,int b,int n);
int main(){
    int stores[2][10];
    table(stores,0,10,2);
    table(stores,0,10,3);
    for (int i =0;i<10;i++){
    printf("%d\t",stores[0][i]);
    }
    for(int i =0;i<10;i++){
    printf("%d\t",stores[1][i]);
    }
    return 0;
}
    void table(int arr[][10],int a,int b,int n){
        for (int i =0;i<b;i++){
            
                arr[a][i] = n*(i+1);
            }

        }

    