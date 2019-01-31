#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int w=n;
    int a[n],b[w];
    for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int aim;
   scanf("%d",&aim);
   int i,s=0;
   int t=0;
   for(i=0;i<n;i++)
   {

       if (a[i]==aim)
        {
        b[t]=i;
        s++;
        t++;
        }
   }
   if(s==0)
    printf("ERROR");
   else
   {
       for(int i=0;i<t-1;i++)
        printf("%d ",b[i]);
       printf("%d",b[t-1]);
   }
   return 0;
}