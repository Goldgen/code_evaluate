#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char Sen[1000000],part[10000000];
char trial[10000000];

int main()
{
    int i,j,x,y,m,n;
    int count[10];
    for(n=0;n<10000;n++)
    {
        count[n]=0;
        scanf("%s",Sen);
        for(m=0;m<1000;m++)
        {
            if(Sen[m]=='#') return 0;
        }
        scanf("%s",part);
        for(m=0;m<1000;m++)
        {
            if(part[m]=='#') return 0;
        }
        x=strlen(Sen);
        y=strlen(part);
        for(i=0;i<x;i++)
        {
            if(part[0]==Sen[i])
            {
                for(j=0;j<y;j++)
                {
                    trial[j]=Sen[i+j];
                }
                if(strcmp(part,trial)==0)
                {
                    count[n]+=1;
                    i=i+y-1;
                }
            }
        }
        printf("%d",count[n]);
    }
    return 0;
}
