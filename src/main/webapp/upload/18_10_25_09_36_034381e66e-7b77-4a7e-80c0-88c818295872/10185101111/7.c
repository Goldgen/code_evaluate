#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,t,n;
    scanf("%d",&a);
    c=1;
    b=(a-1)/2;
    for(int d=1;d<=b;d++){
        printf(" ");
    }printf("*");
    b--;
    printf("\n");
    for(int i=1;i<a/2;i++){
        t=b,n=c;
        while(b!=0){
            printf(" ");
            b--;
        }
        printf("*");
      while(c!=0){
        printf(" ");
        c--;
      }
      printf("*");
      b=t,c=n;
      b--;
      c+=2;
      printf("\n");
    }
   for(int m=1;m<=a;m++){
        printf("*");
    }
}
