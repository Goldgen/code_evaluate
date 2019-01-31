#include<stdio.h>
double feet(int,int,int,int);
double feet(int a,int x,int y,int z)
{
    double v=0;
    v=1.0*a*x*y*z/12;
    return v;
}
int main()
{
    int a[100],b[100],c[100],d[100],i=0,j;
    double s,t=0,v,h[100];
    char e[100];
    e[0]=getchar();
    while(1>0)
    {
        if(e[i]!='\n')
        {
            scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
            v=feet(a[i],b[i],c[i],d[i]);
            if(e[i]=='P')s=0.89;
            else if(e[i]=='F')s=1.09;
            else if(e[i]=='C')s=2.26;
            else if(e[i]=='M')s=4.50;
            else s=3.10;
            h[i++]=s*v;
            t+=h[i-1];
            h[i-1]=h[i-1]+1e-07;
            j=i-1;
            if(e[j]=='P')printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a[j],b[j],c[j],d[j],h[j]);
            else if(e[j]=='F')printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a[j],b[j],c[j],d[j],h[j]);
            else if(e[j]=='C')printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a[j],b[j],c[j],d[j],h[j]);
            else if(e[j]=='M')printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a[j],b[j],c[j],d[j],h[j]);
            else printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a[j],b[j],c[j],d[j],h[j]);
        }
        e[i]=getchar();
        if(e[i]=='T')
        {
            printf("Total cost: $%.2lf",t+1e-07);
            break;
        }
    }
    return 0;
}
