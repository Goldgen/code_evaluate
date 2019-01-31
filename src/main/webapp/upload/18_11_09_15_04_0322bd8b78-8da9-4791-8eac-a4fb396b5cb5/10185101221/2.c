#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0;
   scanf("%d",&n);
   int arr[n];
   int i=0,j=1;
   int a=0;

   for(;i<n;i++)
   {
       arr[i] = i+1;
       a=0;
       for(j=1;j<2*n;j=j+2)
       {

           if(j<2*n-2*i-1)
           {
            printf(" ");
            printf(" ");
           }
           else if((j>=2*n-2*i-1)&&(j<2*n-1))
            printf("%d+",arr[a++]);
            else
                printf("%d=",arr[a]);


       }
       a=i;
       while(arr[a] > 1)
       {
           printf("%d+",arr[a--]);
       }
       if(i==n-1)
       printf("1");
       else
         printf("1\n");



   }
    return 0;
}
