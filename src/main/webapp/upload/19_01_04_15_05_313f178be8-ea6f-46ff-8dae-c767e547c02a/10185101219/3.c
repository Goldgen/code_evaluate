#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strcomp(char *x,char *y)
{
    int w=0,tt=0;
    for(;w<strlen(y);++w){
        if(*(x+w)!=y[w])
            return 0;
    }
    return 1;
}
int main()
{
   char a[1001];
   char test[1001];
   int tag=0;
   while(1)
   {
       tag=0;
       scanf("%s %s",a,test);
       if(a[0]=='#')
        break;
       int length1=strlen(a);
       int length2=strlen(test);
       int i1;
       for(i1=0;i1<length1;i1++)
       {
           if(strcomp(a+i1,test)){
           tag++;
           i1+=length2-1;
           }
       }
       printf("%d\n",tag);
   }
    return 0;
}
