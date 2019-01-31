#include <stdio.h>
#include <string.h>

char ca[10001],cb[10001];
int main()
{
    int i,alength,blength,length,a[10000]={0},b[10000]={0},sum[10000]={0};
    scanf("%s %s",ca,cb);
    alength=strlen(ca);
    blength=strlen(cb);
    length=alength>blength?alength:blength;
    for(i=0;i<alength;i++)
        a[i]=ca[alength-i-1]-'0';
    for(i=0;i<blength;i++)
        b[i]=cb[blength-i-1]-'0';
    for(i=0;i<length;i++)
    {
        sum[i]+=a[i]+b[i];
        if(sum[i]>9&&i<length-1)
        {
            sum[i]-=10;
            sum[i+1]++;
        }
    }
    for(i=length-1;i>=0;i--)
        printf("%d",sum[i]);
    return 0;
}
