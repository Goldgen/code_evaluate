#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,sign1=0,sign=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    scanf("%d",&num);
    for(int i=0;i<n;++i)
    {if(a[i]==num)
        sign1++;
        }
    if(sign1==0)
        printf("ERROR");
    else
    {
        for(int i=0;i<n;++i)
        {
            if(a[i]==num&&sign==0)
                {printf("%d",i);
                sign++;}
            else if(a[i]==num&&sign!=0)
            printf(" %d",i);
        }
    }



    return 0;
}
