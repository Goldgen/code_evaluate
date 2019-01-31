#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#define N 100
int change(char a)
{
switch(a)
{
case '0':return 0;break;
case '1':return 1;break;
case '2':return 2;break;
case '3':return 3;break;
case '4':return 4;break;
case '5':return 5;break;
case '6':return 6;break;
case '7':return 7;break;
case '8':return 8;break;
case '9':return 9;break;
default:break;

}
}
void main()
{
    int a[N],b[N],result[N],i,j,g;
    int extra=0;
    char first[N];
    char second[N];
    scanf("%s",first);
    scanf("%s",second);
    for(i=0;i<N;i++)
    {
        a[i]=change(first[i]);
        b[i]=change(second[i]);
    }
    if(strlen(first)>=strlen(second))
        g=strlen(first);
    else
        g=strlen(second);
    for(j=(g-1);j>=0;j--)
    {
        if((a[j]+b[j]+extra)>=10)
        {
            result[j]=a[j]+b[j]+extra-10;
            extra=1;
        }
        else
        {
            result[j]=a[j]+b[j]+extra;
            extra=0;
        }
    }
    if((a[0]+b[0])>=10)
        {
            printf("1");
        }
    for(i=0;i<g;i++)
        printf("%d",result[i]);
}