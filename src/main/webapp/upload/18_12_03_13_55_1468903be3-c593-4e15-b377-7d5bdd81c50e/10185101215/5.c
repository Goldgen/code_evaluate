#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000],b[1000];
   int i,j,x,y,z,d;
   scanf("%s",&a);
   x=strlen(a);
   scanf("%s",&b);
   y=strlen(b);
   if(x!=y)
    printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
   else
   {
       for(i=0;i<y;i++)
   {
		    
       z=1;
       if(a[0]==b[i])
           {
            for(j=1;b[i+j]!='\0';j++)
                {
                if(a[j]==b[i+j])
               z++;
                }
            if (i+z==x)
            {
                    d=z;
            for(j=0;a[j+d]!='\0';j++)
                if(b[j]==a[j+d])
                    z++;
           }
           }
		     if(z==x) break;  
   }
     if(z!=x) printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
     else printf("\"%s\" is a rotation of \"%s\"",a,b);
   }
   return 0;
}