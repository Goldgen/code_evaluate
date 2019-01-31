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
   scanf("%d",&T);
   char a[200][200];
   int i,j,m,k=0;
   int len[T];
   for(i=0;i<T;i++)
   {
       len[i]=0;
   }


   for(i=0;i<T;i++)
   {
       for(m=0;m<200;m++)
    {
       while(scanf("%s",a[i][m])!='\n')
        {
                len[i]++;
        }
    }
        for(k=0;k<len[i];k++){
            for(j=k+1;j<len[i];j++)
                if((a[k][0]>='A')&&(a[k][0]<='Z')&&(a[j][0]>='A')&&(a[j][0]<='Z')&&(a[k][0]>a[j][0]))
                    swap(a[k],a[j]);
        }

       printf("case #%d:\n",i);
       for(i=0;i<len[i];i++)
        printf("%s ",a[i]);
       puts("");

   }
    return 0;
}
