#include<stdio.h>
int main(void)
{
    int n,a,b,e,c;
    int abc[10];
    int bcd[10];
    scanf("%d",&n);
    printf("1\n1 1");
    if(n!=2)
        printf("\n");
    abc[0]=abc[1]=1;
    for(a=3;a<=n;a++){
        printf("1 ");
        for(b=2;b<=a-1;b++){
            e=abc[b-2]+abc[b-1];
            printf("%d ",e);
            bcd[b-1]=e;
        }
        for(c=2;c<=b-1;c++){
            abc[c-1]=bcd[c-1];
        }
        printf("1");
        abc[a-1]=1;
        if(a!=n)
            printf("\n");
    }
    return 0;
}
