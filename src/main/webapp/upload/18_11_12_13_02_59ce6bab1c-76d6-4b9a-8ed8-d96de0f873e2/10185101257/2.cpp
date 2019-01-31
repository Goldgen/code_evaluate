#include<stdio.h>
#include<ctype.h>
void pri(int st,int ed)
{
    int ans[128],cnt=0;
    for(int i=st;i<=ed;++i)
    {
        if(isgraph(i)!=0)
            ans[cnt++]=i;
    }
    if(!cnt) printf("NONE");
    for(int i=0;i<cnt;i++)
        {
            printf("%-8d%c",ans[i],ans[i]);
            if(i<cnt-1) printf("\n");
        }
}
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    pri(st,ed);
    return 0;
}
