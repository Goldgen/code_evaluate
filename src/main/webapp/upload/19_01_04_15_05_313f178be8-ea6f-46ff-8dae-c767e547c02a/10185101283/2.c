#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d+%d=%d",&a,&b,&c)!=EOF)
    {
        int m=a,n=b;
        int x=0,y=0;
        while(m+n<c)
        {
            m=m*10;
            ++x;
            if(m+n==c)
                break;
        }
        if(m+n!=c)
            x=0;
        int p=a,q=b;
        while(p+q<c&&x==0)
        {
            q=q*10;
            ++y;
            if(p+q==c)
                break;
        }
        if(p+q!=c)
            y=0;
        if(x==0&&y==0)
            printf("0\n");
        else if(x>0&&y==0)
            printf("%d\n",x);
        else if(x==0&&y>0)
            printf("-%d\n",y);
    }
    return 0;
}
