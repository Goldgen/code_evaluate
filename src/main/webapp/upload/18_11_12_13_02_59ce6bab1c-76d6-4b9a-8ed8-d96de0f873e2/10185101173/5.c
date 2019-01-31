#include <stdio.h>
#include <stdlib.h>

double huansuan(int a,int b,int c)
{
    double m=(double)(a*b*c)/12;
    return m;
}

double zhonglei(char kind,double m)
{
    double n=0;
    switch(kind)
    {
    case 'P':
        n=m*0.89;
        break;
    case 'F':
        n=m*1.09;
        break;
    case 'C':
        n=m*2.26;
        break;
    case 'M':
        n=m*4.50;
        break;
    case 'O':
        n=m*3.10;
        break;
    }
    return n;
}

int main()
{
    int d,a,b,c,i=0;
    double n=0;
    char kind;
    int d1[100],a1[100],b1[100],c1[100];
    double n1[100];
    char kind1[100];
    do
    {
        kind=getchar();
        if(kind=='T')
            break;
        scanf(" %d %d %d %d",&d,&a,&b,&c);
        n=(zhonglei(kind,huansuan(a,b,c)))*(double)d;
        d1[i]=d;a1[i]=a;b1[i]=b;c1[i]=c;n1[i]=n;kind1[i]=kind;
        ++i;
    }
    while(kind!='T');
    for(int j=0;j<i+1;++j)
    {
        if(kind1[j]=='P')
            printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",d1[j],a1[j],b1[j],c1[j],n1[j]);
        else if(kind1[j]=='F')
            printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",d1[j],a1[j],b1[j],c1[j],n1[j]);
        else if(kind1[j]=='C')
            printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",d1[j],a1[j],b1[j],c1[j],n1[j]);
        else if(kind1[j]=='M')
            printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",d1[j],a1[j],b1[j],c1[j],n1[j]);
        else if(kind1[j]=='O')
            printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",d1[j],a1[j],b1[j],c1[j],n1[j]);
    }
    double sum=0;
    for(int k=0;k<i+1;++k)
        sum+=n1[k];
    printf("Total cost: $%.2lf",sum);
    return 0;
}
