#include <stdio.h>
#define N 30
int main()
{
   char str[N]={};
   int i;
   int k=0;
   scanf("%s",&str);
   for(i=0;i<N;++i)
   {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        ++k;
   }
   if(k!=0)
    printf("yes");
   else
    printf("no");
}
