#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        char arr[100];
        gets(arr);
        printf("case #%d: ",i);
        for(int j=0;j<strlen(arr);j++){
            if(arr[j]=='Z')
                printf("A");
            else
                printf("%c",arr[j]+1);
        }
        printf("\n");
    }
    return 0;
}
