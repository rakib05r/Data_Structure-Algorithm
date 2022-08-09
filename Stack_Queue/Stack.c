#include<stdio.h>
int main()
{
    int arr[100],top=-1,op,data,i;
    while(1){
        printf("\nFor Push Enter 1\nFor Pop Enter 2\nFor Exit Enter 3:\n");
        scanf("%d",&op);
        if(op==1){
            if(top==101){
                printf("\nOverflow\n");
            }else{
                top=top+1;
                printf("\nEnter data\n");
                scanf("%d",&data);
                arr[top]=data;
                printf("\nAfter push data:\n");
                for(i=0;i<=top;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }
        }else if(op==2){
            if(top==-1){
                printf("\nUnderflow\n");
            }else{
                top=top-1;
                if(top==-1){
                    printf("\nAll Data Removed\n");
                }else{
                  printf("\nAfter pop data:\n");
                for(i=0;i<=top;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}
