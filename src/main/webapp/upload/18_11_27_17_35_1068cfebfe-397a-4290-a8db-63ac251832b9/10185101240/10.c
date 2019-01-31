#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d\n",&n);
   int input[]={0};
   int i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&input[i]);
   }
   int j,temp;
	  for (j=0;j<n-1;j++){
        for (i=0;i<n-1;i++)
        {
            if(input[i]>input[i+1])
            {
                temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
            }
        }}
   for(i=0;i<n;i++)
    {
	   if(i==0)
           printf("%d",input[i]);
	   else
		   printf(" %d",input[i]);
    }
    return 0;
}