#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int i=0,j=0,k=0,n,r,s=0;
   char a[1001],b[1001];
  
       
       scanf("%s %s",&a,&b);
   n=strlen(b);
   while(k<strlen(a)-strlen(b)+1)
   {

       r=k;
       for(i=0,j=0;r<k+n;r++,i++)
       {
           if(a[r]==b[i])
            j++;
       }
       if(j==n)
        s++;
       k+=n;
   }
   printf("%d\n",s);
   
}