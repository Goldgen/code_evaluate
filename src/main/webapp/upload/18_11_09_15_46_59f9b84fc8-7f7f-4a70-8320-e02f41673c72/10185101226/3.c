#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,q,p;
    char a;
    int bian;
    a='A';
    scanf("%d",&n);
    bian=n-1;
    i=1;
     //输出2n-1行
        for(j=1;j<=(n-1);++j)   //输出前n-1行
        {
            for(q=1;q<=(bian);++q)//输出空格
            {
                printf(" ");
            }
            --bian;
            for(p=1;p<=(2*j-1);++p)
            {
                printf("%c",a);    //输出字母
            }
            a=(char)a+1;
            printf("\n");
        }
        for(j=1;j<=(2*n-1);++j)
            printf("%c",a);
            printf("\n");
        a=(char)a+1;
        for(j=(n-1);j>=2;--j)
        {
            for(q=1;q<=i;++q)
            {
                printf(" ");
            }
            ++i;
            for(p=1;p<=(2*j-1);++p)
            {
                printf("%c",a);
            }
            a=(char)a+1;
            printf("\n");
        }
        for(j=1;j<=(n-1);++j)
            printf(" ");
        printf("%c",a);
    return 0;
}