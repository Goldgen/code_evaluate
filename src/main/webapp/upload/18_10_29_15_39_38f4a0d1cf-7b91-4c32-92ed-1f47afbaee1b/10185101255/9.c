#include<stdio.h>

int main()
{
    int n=0,s=1;
    int i=0,j=0;
    scanf("%d",&n);
    printf("1\n");
    for (i=2; i<=n;s=1,i++) {
        printf("1");
        for (j=1;j<=i-2; j++)
            printf(" %d",(s=(i-j)*s/j));
        if(i<n)
            printf(" 1\n");
        else
            printf(" 1");
        
    }
   
    return 0;
}

