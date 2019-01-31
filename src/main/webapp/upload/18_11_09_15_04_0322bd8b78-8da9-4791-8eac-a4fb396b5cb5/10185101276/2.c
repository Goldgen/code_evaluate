#include <stdio.h>
int main()
{
     int n,a,b,c,i,e;
     scanf("%d",&n);
     a=n-1;
     for(i=1;i<=n;i++){
       for(c=a;c>=1;c--) printf("  ");
       for(e=1;e<=i;e++)
       {
            if(e!=i)printf("%d+",e);
            else printf("%d=",e);
       }
       for(b=i;b>=1;b--)
       {
        if(i!=n){
            if(b!=1)printf("%d+",b);
            else printf("1\n");}
        else {
            if(b!=1)printf("%d+",b);
            else printf("1");}
       }
         a-=1;
        }
     return 0;
}
