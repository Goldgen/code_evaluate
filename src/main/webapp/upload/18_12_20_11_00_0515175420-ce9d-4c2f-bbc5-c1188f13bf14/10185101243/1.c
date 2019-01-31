#include <stdio.h>
#include <string.h>

void swap(char s[],char r[])
{
   char t[200];
   strcpy(t,s);
   strcpy(s,r);
   strcpy(r,t);
}

int main()
{
   int T;
   scanf("%d\n",&T);
   char a[200][200];
   int i,j,k=0;
   //int len[T];
   //for(i=0;i<T;i++)
   //{
   //    len[i]=0;
   //}


   for(i=0;i<T;i++)
   {
         gets(a[i]);
                //len[i]++;
   }


        for(k=0;k<T-1;k++){
           for(j=k+1;j<T;j++)
                {
                    if(strcmp(a[k],a[j])>0)
        swap(a[k],a[j]);
        }
        }
    for(i=0;i<T;i++)
       {
        printf("%s",a[i]);
       puts("");}


    return 0;
}
