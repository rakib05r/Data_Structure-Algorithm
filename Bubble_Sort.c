#include<stdio.h>
int main()
{
    int arr[100],i,n,j,temp;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d th element\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
