#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char a[9];long int b[20];int x,z,i,sum=0;
   scanf("%s",a);
   x=strlen(a);
   for(i=x-1;i>=0;i--)
   {
       if(a[i]>='0'&&a[i]<='9')
       {z=a[i]-'0';
    b[i]=z*pow(16,x-1-i);
       }
       else if(a[i]>='a'&&a[i]<='f')
       {
        z=a[i]-'a'+10;
    b[i]=z*pow(16,x-1-i);
       }
       else
        {
        z=a[i]-'A'+10;
    b[i]=z*pow(16,x-1-i);
       }
   }
   for(i=x-1;i>=0;i--)
    sum+=b[i];
   printf("%ld",sum);
   return 0;
}