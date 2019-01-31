#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 char a[1000];
 gets(a);
 int i,j,x,y=0,k;
 char c;
 printf("%c ",a[0]);
 for(i=0;a[i]!='\0';i++)
    if(a[i]==a[0]) y++;
 printf(" %d;",y);
 for(i=1;a[i]!='\0';i++)
 {
     c='0';
     y=0;
     for(j=i-1;j!=0;j--)
     {
         x=0;
         if(a[i]!=a[j])
            x++;
         if(x==j-1)
         {
             c=a[i];
        printf(" %c ",c);
         for(k=0;a[k]!='\0';k++)
            if(a[k]==a[i]) y++;
            printf(" %d;",y);
         }

     }
 }
 return 0;
}
