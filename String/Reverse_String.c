#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len,i;

    printf("Enter The String\n");
    gets(str);

    len=strlen(str);

    printf("Reverse of %s\n",str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}
