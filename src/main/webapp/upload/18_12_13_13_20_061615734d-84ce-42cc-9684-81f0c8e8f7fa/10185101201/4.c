#include <stdio.h>
#include<string.h>

int main()
{
    int n,i=0,j,k;
    char c[55],d[55], *ptr1=NULL,*ptr2=NULL;
    scanf("%d",&n);
    getchar();
    while(i<n)
    {
        gets(c);
        ptr1=&c;
        ptr2=&d;
        for(j=0;j<strlen(c);j++)
            {
                if(*(ptr1+j)=='Z')
                    *(ptr2+j)='A';

                else
                    *(ptr2+j)=*(ptr1+j)+1;
            }
        printf("case #%d: ",i);
        for(k=0;k<strlen(c);k++)
            printf("%c",*(ptr2+k));
        i++;
        if(i<n)
            printf("\n");
    }
}