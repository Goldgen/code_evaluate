#include<stdio.h>

int main()

{ int n,a,b,i;
scanf("%d",&n);
printf("1");
for(a=1;a<n;a++)
{i=1;
printf("\n1");
for(b=0;b<a;b++)
{i=i*(a-b)/(b+1);
    printf(" %d",i);
    }
}     return 0;
}
