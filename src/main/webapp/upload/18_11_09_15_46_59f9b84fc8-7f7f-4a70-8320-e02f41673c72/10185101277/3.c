#include<stdio.h>
int main()
{
    char a='A';
    int i,j,n;
    scanf("%d",&n);
    int n1=2*n;
    char a1=a;
    for(i=1;i<=n;i++,a1++)
        {
            for(j=1;j<n1;j++)
            {
                if(j<=n-i){printf(" ");}
                else if(j>n-i&&j<n+i){printf("%c",a1);}
                else {printf("\n");break;}
            }
        }
    for(i--,i--;i>0;i--,a1++)
    {
        printf("\n");
        for(j=1;j<n1;j++)
        {
            if(j<=n-i){printf(" ");}
                else if(j>n-i&&j<n+i){printf("%c",a1);}
                else break;
        }
    }
    return 0;
}
