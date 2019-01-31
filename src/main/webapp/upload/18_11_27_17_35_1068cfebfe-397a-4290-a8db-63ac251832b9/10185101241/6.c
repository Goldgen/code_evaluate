#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d\n",&a);
    int data[a];
    for(i=0;i<=a-1;i++)
    {
        if(i==a-1) scanf("%d\n",&data[i]);
        else scanf("%d ",&data[i]);
    }
    int x,j,b[a-1],y=0,c=0;
    scanf("%d",&x);
    for(i=0;i<=a-1;i++)
    {
        if(data[i]==x)
        {
            for(j=0;j<i;j++)
            {
                b[j]=data[j];
            }
            for(j=i;j<a-1;j++)
            {
                b[j]=data[j+1];
            }
            for(j=0;j<=a-2;j++)
            {
                if(j==a-2) printf("%d",b[j]);
                else printf("%d ",b[j]);
            }
        }
    }
    while(c<=a-1)
    {
        if(data[c]==x) y+=1;
        c++;
    }
    if(y==0) printf("ERROR");
    return 0;
}
