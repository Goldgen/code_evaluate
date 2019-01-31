#include<stdio.h>
int isgraph(int i)
{
    if(i>=33&&i<=126)
    return 1;
    else
    return 0;
}
int main()
{
   int st,ed;
   scanf("%d  %d",&st,&ed);
   int i=st;
   if(isgraph(ed)||isgraph(st)||st<=0&&ed>=127)
   {
    for(;i<ed;++i)
      {
       if(isgraph(i))
        printf("%-3d     %c\n",i,i);
      }
      if(isgraph(i))
        printf("%-3d     %c",i,i);
   }
   else
    printf("NONE");
   return 0;
}
