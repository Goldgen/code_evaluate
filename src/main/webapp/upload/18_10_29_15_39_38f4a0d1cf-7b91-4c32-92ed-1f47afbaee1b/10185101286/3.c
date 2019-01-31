#include<stdio.h>
int main()
{
    int a,i,j,k,count;
    scanf("%d",&a);
    printf("%d",a);
    for(i=3;i<=a/2;i+=2)
    {
        j=a-i;
        count=0;
        for(k=2;k<i;++k)
        {
            if(i%k==0)
                count+=1;
        }
        if(count==0)
        {
            count=0;
            for(k=2;k<j;++k)
            {
                if(j%k==0)
                    count+=1;
            }
            if(count==0)
            {
                printf("=%d+%d",i,j);
            }
        }
    }
    return 0;
}
