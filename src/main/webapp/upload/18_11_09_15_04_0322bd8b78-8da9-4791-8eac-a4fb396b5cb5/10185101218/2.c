#include <stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    for(c=1;c<n+1;c++){
        for(d=2*(n-c+1)-2;d>0;d--)
            printf(" ");
        printf("1");
        for(a=2;a<=c;a++)
            printf("+%d",a);
        printf("=");
        for(b=c;b>1;b--)
            printf("%d+",b);
        if(c!=n)
            printf("1\n");
        else
            printf("1");
    }
    return 0;
}
