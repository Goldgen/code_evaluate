#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,h,j,k,l,a,b,c,count;
    scanf("%d %d",&n,&m);
    count=1;
    h=n;
    for(j=1;j<10;++j)
    {
        k=h/10;
        h=k;
        if(k!=0)
        {
            count+=1;
        }
        else break;
    }
    for(l=1;l<=m;++l)
    {
        a=n/10;
        b=n%10;
        c=pow(10,count-1);
        n=a+b*c;
    }
    printf("%d %d",count,n);
    return 0;
}
