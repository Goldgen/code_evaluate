#include<stdio.h>
#include<string.h>
int main()
{
   char a[80];int i,x;
   scanf("%s",&a);
   x=strlen(a);
   for(i=0;i<8;i++)
   {
       if(a[i]>='a'&&a[i]<='c') printf("2");
       else if(a[i]>='d'&&a[i]<='f') printf("3");
       else  if(a[i]>='g'&&a[i]<='i') printf("4");
        else  if(a[i]>='j'&&a[i]<='l') printf("5");
         else  if(a[i]>='m'&&a[i]<='o') printf("6");
           else if(a[i]>='p'&&a[i]<='s') printf("7");
             else if(a[i]>='t'&&a[i]<='v') printf("8");
            else   printf("9");

   }
return 0;
}