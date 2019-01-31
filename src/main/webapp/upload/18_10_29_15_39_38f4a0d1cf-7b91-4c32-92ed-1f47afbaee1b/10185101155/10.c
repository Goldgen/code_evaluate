#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    int mark = 0;//标记m在二进制数“1”的位次
    unsigned int t;
    for(m=0;m<pow(2,n);m++)
    {
       t = m;
       printf("{");
       while(t!=0)
       {
           if(t%2==1)
           {
             printf("%d",mark);
           }
           if(t%2==1&&t!=1)
            printf(",");
           t=t>>1;
           mark++;
           }
       printf("}");
       if(m!=pow(2,n)-1)
            printf("\n");
            mark = 0;
    }
    return 0;
}