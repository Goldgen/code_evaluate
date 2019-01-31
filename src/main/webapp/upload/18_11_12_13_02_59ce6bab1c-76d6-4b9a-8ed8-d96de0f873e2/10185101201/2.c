#include<stdio.h>
#include<ctype.h>
void g(int x,int y)
{
    int j=x,s=1,t=0;
    for(j=x;j<=y;j++)
    {
        if(isgraph(j))
            t++;
    }
    if(t==0)
        printf("NONE");
    else
    {
        for(j=y-t+1;j<=y;j++,s++)
            {
                if(j<100)
                    printf("%d      %c",j,j);
                else
                    printf("%d     %c",j,j);
                if(s<=t-1)
                    printf("\n");
            }
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    g(a,b);
}