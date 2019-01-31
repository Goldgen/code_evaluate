#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[1000],b[1000];
    int k1,k2;
    int t;
    scanf("%s %s",a,b);
    while(getchar()!='#')
    {
        int s=0;int g=0;
        k1=strlen(a);
        k2=strlen(b);
        for(int i=0;i<k1;i++)
        {
            if(b[0]==a[i])
            {
                t=i;
                for(int i=0;i<k2;i++)
                {
                    if(b[i]==a[t+i])
                    s++;
                }
                if(s==k2)
                g++;
            }
        }
        printf("%d\n",g);
        scanf("%s %s",a,b);
    }
    return 0;
}