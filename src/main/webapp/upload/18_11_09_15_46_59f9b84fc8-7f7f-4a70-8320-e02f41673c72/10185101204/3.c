#include <stdio.h>
int main()
{int n=0,m=0;
char a='A';
scanf("%d",&n);
for(int i=1;i<n;i++)
    printf(" ");
printf("A");
for(int i=2;i<=n;i++)
{m=n-i;
 a+=1;
 printf("\n");
 for(int j=1;j<=m;j++)
    printf(" ");
 for(int j=1;j<2*i;j++)
    printf("%c",a);}
for(int i=2;i<=n;i++)
{a+=1;
 printf("\n");
 for(int j=1;j<i;j++)
    printf(" ");
 for(int j=0;j<=2*(n-i);j++)
    printf("%c",a);
}
}
