#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   int array[100];
   int length=1;
   int max[100]={1};
   int m=0;

   scanf("%d",&number);
   for(int i=0; i<number; i++){
   scanf("%d",&array[i]);
   getchar();
   }
   for(int j=1; j<number; j++){
   if(array[j]==array[j-1])
   length++;
   else{
   max[m]=length;
   m++;
   length=1;
   }
   }
   max[m]=length;
   int c=max[0];
   for(int q=1; q<m+1; q++){
        if(c<=max[q])
        c=max[q];
   }
   printf("%d",c);

}
