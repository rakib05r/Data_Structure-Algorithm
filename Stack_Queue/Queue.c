#include<stdio.h>
int main()
{
    int arr[3],front=-1,rear=-1,op,data,i;

    while(1){
        printf("\nEnter 1 For Enque\nEnter 2 For Deque\nEnter 3 For Exit\n\n");
        scanf("%d",&op);
        if(op==1){
            if(rear==3){
                printf("Overflow\n");
            }else{
                if(front==-1){
                    front=front+1;
                }
                rear=rear+1;
                printf("Enter Data:\n");
                scanf("%d",&data);
                arr[rear]=data;
                printf("\nAfter Enque Data:\n");
                for(i=front;i<=rear;i++){
                    printf("%d ",arr[i]);
                }
            }
        }else if(op==2){
            if(front==-1){
                printf("Underflow\n");
            }else{
                front=front+1;
                printf("\nAfter Deque Data:\n");
                for(i=front;i<=rear;i++){
                    printf("%d ",arr[i]);
                }
                if(front>rear){
                    front=rear=-1;
                }
            }
        }else{
            return 0;
        }
    }
    return 0;
}
