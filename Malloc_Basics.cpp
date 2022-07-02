#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    printf("Enter the number of Integers: \n");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("No Memory Allocated\n");
    }else{
        for(i=0;i<n;i++){
            scanf("%d",ptr+i);
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    //Free Pointer
    free(ptr);
    return 0;
}
