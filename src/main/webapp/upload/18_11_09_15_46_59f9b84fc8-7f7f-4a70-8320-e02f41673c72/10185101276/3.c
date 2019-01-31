#include <stdio.h>
#include <string.h>
int main()
{
    char b;
    int a=1;
    int n=0,i=0;
    scanf("%d",&n);
    for (a=1;a<=n;a++){
        for (i=1;i<=n-a;i++)printf(" ");
        for (i=1;i<=2*a-1;i++){b=a+64;printf("%c",b);}
        printf("\n");
    }
    for (;a<=2*n-1;a++){
        for (i=1;i<=a-n;i++)printf(" ");
        for (i=1;i<=(2*n-a)*2-1;i++){b=a+64;printf("%c",b);}
        if(a==2*n-1)continue;
        printf("\n");
    }
    return 0;
}