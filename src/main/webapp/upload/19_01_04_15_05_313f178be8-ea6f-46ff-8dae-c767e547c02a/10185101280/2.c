#include<stdlib.h>
#include<string.h>
int fun(int a,int b)
{
    int i=1;
    i=i*a;
    return i;
}
void main()
{ int a,b,c;
    scanf("%d+%d=%d",&a,&b,&c);
    if(a>=0&&b<=1e4&&c>=0&&c<=1e9)
    {
    if(a+b==c)
            printf("0");
       
        int j,i;
for(i = 1, j = a; j + b < c; i++)
        j = a * fun(10, i);
        i--;
    if(j + b > c)
    {
        for(i = 1, j = b;a+j < c; i++)
           j = b * fun(10, i);
            i--;
            i=-i;
       }
        printf("%d", i);
    }
return 0;
}