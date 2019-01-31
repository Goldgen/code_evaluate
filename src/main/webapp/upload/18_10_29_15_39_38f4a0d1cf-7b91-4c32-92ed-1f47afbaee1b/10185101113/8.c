#include<stdio.h>
int main()
{
    unsigned long long  n,m,j=10,newNum=0;
    int i=1;
    scanf("%llu %llu",&n,&m);
    //得到位数
    while(n/j!=0){
        i++;
        j *=10;
    }
    printf("%d ",i);
    //得到各位数字
    int a[i-1],b[i-1];
    for( unsigned long long k=0,q=10,w=1;k<i;k++)
    {
        a[k]=b[k]=n%q/w;
        q *=10;
        w *=10;
    }
    unsigned long long h=m%i;
    //得到右移后的各位数字
    for(int e=0;e<i;e++)
    {
        if(e>=h)
            a[e-h]=b[e];
        else
            a[e+i-h]=b[e];

    }
    //得到新生成的数
    for(unsigned long long  r=0,p=1;r<i;r++)
    {
        newNum +=a[r]*p;
        p *=10;
    }
    printf("%llu",newNum);
    return 0;
}
