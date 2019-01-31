#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;//指这个偶数
    int m=0;
    int d=0;
    int f=0;
    int n=0;
    scanf("%d",&a);
        if((a>4)&&(a<=1000)&&(a%2==0))
            printf("%d",a);
        for(int i=3; i<(a/2)+1; i+=2)
        {
            for(int c=2; c<i; c+=1)
            {
                d=i%c;

                if(d==0)
                    break;
                else
                    n=1;
            }


            for(int e=2; e<a-i; e+=1)
            {
                f=(a-i)%e;

                if(f==0)
                    break;
                else
                    m=1;
            }
             if((d==0)||(f==0))
            continue;
             if((m==1)&&(n==1))
                printf("=%d+%d",i,a-i);
        }

    return 0;
}

