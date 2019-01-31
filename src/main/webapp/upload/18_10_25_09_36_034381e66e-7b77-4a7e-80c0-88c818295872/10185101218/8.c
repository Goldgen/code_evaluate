#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f,g,i,j,k,l,m;
    int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    g=j=i=0;
    scanf("%d%d%d%d%d%d",&a,&c,&e,&b,&d,&f);
    for(;a<b;a++)
        {
            if((a%4==0&&a%100!=0)||(a%400==0))
                g+=366;
            else
                g+=365;
        }
    for(i=0;i<(c-1);i++)
        j+=md[i];
    j+=e;
    if(((a%4==0&&a%100!=0)||(a%400==0))&&(c>2))
        j++;
    for(k=0;k<(d-1);k++)
        l+=md[k];
    l+=f;
    if(((b%4==0&&b%100!=0)||(b%400==0))&&(d>2))
        l++;
    m=g-j+l;
    printf("采集时间为%d天",m);
    return 0;
}

