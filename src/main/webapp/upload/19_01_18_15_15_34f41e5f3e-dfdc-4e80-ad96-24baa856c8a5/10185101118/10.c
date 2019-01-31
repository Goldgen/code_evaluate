#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,m=1,x=0,i,b[10],y;
    scanf("%d",&n);
    a=pow(2,n);
    printf("{}\n");
    for(i=0;i<=n-1;i++)
        b[i]=i;
    for(;m<=a-1;m++)
    {
        y=m;
        printf("{");
        for(int v=1;v<=n;v++)
        {
            if(y%(int)pow(2,v)!=0)
            {
                if(0==x)
                {
                    x=1;
                    printf("%d",b[v-1]);
                    y-=pow(2,v-1);
                }
                else
                {
                    printf(",%d",b[v-1]);
                    y-=pow(2,v-1);
                }
            }
            if(y<=0)break;
        }
        x=0;
        if(m!=a-1)printf("}\n");
        else printf("}");
    }
    return 0;
}