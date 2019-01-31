#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    char *p=&a;
    int m,i,j;
    scanf("%d\n",&m);
    for(i=0;i<m;i++)
    {
        if(i)
            printf("\n");
        gets(a);
        printf("case #%d: ",i);
        for(j=0;j<strlen(a);j++)
        {
            if(*(p+j)=='Z'||*(p+j)=='z')
               printf("%c",*(p+j)-25);
            else
               printf("%c",*(p+j)+1);
        }
    }
    return 0;
	}
