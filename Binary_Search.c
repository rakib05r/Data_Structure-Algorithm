#include<stdio.h>
int main()
{
    int arr[100],i,first,last,n,num,mid;
    printf("Number must be sorted\n\n");
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d th elements\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter search number\n");
    scanf("%d",&num);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last){
        if(arr[mid]==num){
            printf("Found at %d th position\n",mid+1);
            break;
        }else if(arr[mid]<num){
            first=mid+1;
        }else{
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last){
        printf("Not Found\n");
    }
    return 0;
}
