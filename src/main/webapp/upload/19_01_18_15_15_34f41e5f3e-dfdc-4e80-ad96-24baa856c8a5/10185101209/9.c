#include<stdio.h>

int main()
{
    int line=0,l,m_line,num[1000]={1};


    scanf("%d",&line);
    l=line;
    for(line=1;line-1<l;line++){
        m_line=line-1;
        for(int i=1;m_line>0;i++,m_line--)
            num[i]=num[i-1]*m_line/i;
        for(int i=0,count=0;i<line;i++){
            count++;
            if(count!=1)
                printf(" ");
            printf("%d",num[i]);
        }
        if(l!=line)
            printf("\n");
    }
    return 0;
}