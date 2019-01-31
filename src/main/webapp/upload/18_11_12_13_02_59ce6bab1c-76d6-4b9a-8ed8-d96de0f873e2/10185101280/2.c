#include<stdio.h>
#include<ctype.h>

int main ()
{
    int st,ed;
    scanf("%d%d",&st,&ed);
    if((st<ed)&&st>=0&&st<=127&&ed>=0&&ed<=127)
    {
        int c=0;
        for(int i=st;i<=ed;i++)
            {
                  if(isgraph(i))
                    c++;
        }
                if(c==0)
                  printf("NONE");
      for(int i=st;i<=ed;i++)
            {
                int c=0;
                if(isgraph(i))
                    c++;
                   if(c==0);
                   else
                {
                    if(isgraph(i))
                    {  if(i!=ed)
                            printf("%-4d%5c\n",i,i);
                        if(i==ed)
                           {
                         printf("%-4d%5c",i,i);

                            }
                    }

                }
            }
         }
    return 0;
}
