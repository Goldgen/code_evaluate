#include<stdio.h>
#include<string.h>
char* i2a(char* p,int n);
int main()
{
    int num;
    char toalpha[100]={0};
    scanf("%d",&num);
    i2a(toalpha,num);
    printf("%s",toalpha);
    return 0;
}
char* i2a(char* p,int n)
{
int i;
int wei=1;
int shu=n;
for(i=0;i<100;++i)
    {
    if(shu/10==0)
    {
    break;
    }
    ++wei;
    shu=shu/10;
    }
for(i=wei-1;i>=0;--i)
{
p[i]='0'+n%10;
n=n/10;
}
return p;
}