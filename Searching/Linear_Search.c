#include<stdio.h>
int main()
{
    int arr[100],n,num,i,pos,ck=0;
    printf("Enter number of Elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d th Element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter search number\n");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            ck=1;
            pos=i+1;
            break;
        }
    }
    if(ck==1){
        printf("%d found at position %d\n",num,pos);
    }else{
        printf("Not Found\n");
    }
    return 0;
}
