//MALLOC = Memory Allocation
//CALLOC = Clear Allocation
//malloc(size of each block);
//calloc(Number_Of_Blocks,size of each block);
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,n;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    printf("Ptr: %d\n*Ptr: %d\n",ptr,*ptr);
    if(ptr==NULL){
        printf("Memory not available\n");
        return 0;
    }
    for(i=0;i<n;i++){
        printf("Enter %dth Elements\n",i+1);
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%dth Element: %d ",i+1,*(ptr+i));
    }
    return 0;
}
