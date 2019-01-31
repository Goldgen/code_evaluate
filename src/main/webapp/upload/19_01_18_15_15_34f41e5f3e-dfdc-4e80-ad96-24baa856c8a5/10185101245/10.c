#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
int i,j,x;
scanf("%d",&a);
b=pow(2,a)-1;
for(i=0;i<b;i++)
{
    printf("{");
    j=i;
    x=0;
    while(j!=0)
    {

        if(j%2!=0&&j!=1)
            printf("%d,",x);
        else if(j==1)
        printf("%d",x);
        j/=2;
        x++;
        }
        printf("}\n");
}
    if(a!=1)	
	{	
		printf("{");
for(i=0;i<=x-2;i++)
    printf("%d,",i);
printf("%d}",x-1);
	}
	else
		printf("{0}");



        return 0;
}
