#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int test(int x,int y)
{
    int sum=0;
    for(int i=x;i<=y;++i){
    if(isgraph(i))
        sum=sum+1;
    else
        sum=sum;
        }
    if(sum!=0)
        return 1;
    else
        return 0;}
int main()
{int a,b;
   scanf("%d %d",&a,&b);
   if (test(a,b)){
        int k;
         for(k=a;k<=b;++k){
            if(isgraph(k)&&k!=b)
                    {if(k>=100)
                    printf("%d     %c\n",k,k);
                else if(k<100)
                    printf("%d      %c\n",k,k);}
        else if(isgraph(k)&&k==b)
                    {if(k>=100)
                    printf("%d     %c",k,k);
                else if(k<100)
                    printf("%d      %c",k,k);}}}
   else
    printf("NONE");
    return 0;
}



