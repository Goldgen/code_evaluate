#include<stdio.h>
#include<math.h>
int main (void)
{
    int n,x,y,z,a,b,c,i,j;
    scanf("%d",&n);
    printf("%d",n);
    for(x=1;x<=n/2;x++)
    {
        i=0;
        for(y=1;y<=x;y++)
        {
            if(x%y==0)
                i++;
        }
        if(i==2)
        {
            z=x;
            for(a=n/2;a<n;a++)
            {
                j=0;
                for(b=1;b<=a;b++)
                {
                    if(a%b==0)
                        j++;
                }
                if(j==2)
                {
                    c=a;
                    if(z+c==n)
                        printf("=%d+%d",z,c);
                }
            }
        }
    }
            return 0;
}