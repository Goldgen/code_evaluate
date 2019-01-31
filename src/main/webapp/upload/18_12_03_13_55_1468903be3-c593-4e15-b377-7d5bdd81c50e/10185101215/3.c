#include<stdio.h>
#include<string.h>
int main()
{
   char a[80],b[80];
   int i,x,y,z;
   scanf("%s",&a);
   x=strlen(a);
   scanf("%s",&b);
   y=strlen(b);
   if(x>=y) z=y;
   else z=x;
   for(i=0;i<z;i++)
   {
       printf("%c%c",a[i],b[i]);
   }
   for(i=z;a[i]!='\0'||b[i]!='\0';i++)
   {
       if(x>=y)
        printf("%c",a[i]);
       else
        printf("%c",b[i]);
   }

return 0;
}
