#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,val;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d th Element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter position of new value insertion:\n");
    scanf("%d",&pos);
    printf("Enter New value:\n");
    scanf("%d",&val);
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
