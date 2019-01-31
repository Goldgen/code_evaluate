#include <stdio.h>
#include<string.h>
int main()
{
    int n,i=0,j,k;
    char a[50],b[50], *t1=NULL,*t2=NULL;
    scanf("%d",&n);
    getchar();
    while(i<n)
    {
        gets(a);
        t1=&a;
        t2=&b;
        for(j=0;j<strlen(a);j++)
            {
                if(*(t1+j)=='Z')
                    *(t2+j)='A';

                else
                    *(t2+j)=*(t1+j)+1;
            }
        printf("case #%d: ",i);
        for(k=0;k<strlen(a);k++)
            printf("%c",*(t2+k));
        i++;
        if(i<n)
            printf("\n");
}
return 0;
}
