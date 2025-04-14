#include<stdio.h>
int n,arr[100],i;
void create(){
    printf("enter the element");
    for( int i=0;i<n;i++){
        
    scanf("%d",&arr[i]);

    }

}
void display(){
    printf("elements :");
    for(int i;i<n;i++){
        scanf("%d",&arr[i]);

}
}
void insert (){
    int element,position;
    printf("Enter the element :");
    scanf("%d",&position);
    printf("enetr the position :");
    scanf("%d",&position);
    for(i=n-1;i>=position;i--){
        arr[i+1]=arr[i];
        arr[position]=element;
        n++;
    }
}
void deletion(){
    int position;
    for(int i=position;i<n;i++ ){
        arr[i]=arr[i+1];
        n--;

      void date (){
        for(i=0;i<n;i++){
            if(a[i]==date);
            printf("data found","%d")
            }  

    }
}


int main(){
    
    
    printf("Enter the number ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("elements :");
    for(int i;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int choice;
    printf("Enter the choice\n");
    
        printf("Menu\n");
        printf("display\n");
        printf("insert\n");
        printf("create\n");
        printf("deletion\n");
        scanf("%d",&choice);
        do{
        switch(choice){
            case 1:
            display();
            break;
            case 2:
            insert();
            break;
            case 3:
            create();
            break;
            case 4:
            deletion();
            break;
            case 5:
            printf("exit\n");
            break;
            default:
            printf("invalid choice\n");
        }
    }while (choice<=4);

    }


        return 0;
    }
    



    