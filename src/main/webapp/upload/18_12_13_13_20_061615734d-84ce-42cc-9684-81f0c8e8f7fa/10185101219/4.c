#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    char a[51];
    scanf("%d",&T);
    getchar();
    for(int i=0;i<T;++i)
    {
        gets(a);
        printf("case #%d: ",i);
        for(int k=0;k<strlen(a);++k){
            if(a[k]!='Z')
            printf("%c",a[k]+1);
            else
            printf("A");
        }
        printf("\n");
    }
    return 0;
}
