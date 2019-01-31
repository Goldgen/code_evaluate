#include<stdio.h>
#include<math.h>
int main (void)
{
    int m,n;
    while(scanf("%d%d",&m,&n)==2)
   {
      if(n<33)
        printf("NONE");
         else 
         {
          for(int i=m;i<=n;i++)
            {
                if(i<33){ i=32; continue;}
                if(i<=n)
                {
                 printf("%-8d%c\n",i,i);
					if (i==126) break;
                }
		 }
      }
		
   }

   return 0;
}