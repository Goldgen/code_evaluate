#include <stdio.h>
int main()
{
    int cocks=1,hens,chicks,cnt=0;
    int ans[10][3];
    while(cocks<=14)
    {
        hens=1;
        while(hens<=20)
        {
            chicks=100-cocks-hens;
            if(7.0*cocks+5.0*hens+chicks/3.0==100.0)
            {
                ans[cnt][0]=cocks;
                ans[cnt][1]=hens;
                ans[cnt][2]=chicks;
                ++cnt;
            }
            hens++;
        }
        cocks++;
    }
    for(int i=0;i<cnt;++i)
        printf("%d %d %d%s",ans[i][0],ans[i][1],ans[i][2],i<cnt-1?"\n":"");
    return 0;
}