#include<stdio.h>
int main()
{
    int arr[100],n,i,j,temp;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d th element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
