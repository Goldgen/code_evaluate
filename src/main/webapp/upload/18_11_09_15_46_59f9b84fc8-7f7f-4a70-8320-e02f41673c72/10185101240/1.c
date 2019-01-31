#include<stdio.h>
int main()
{
    int c=0;
	for(int i=1;i<=100;i++)
    {
        if((i%3==0)&&(i%10==6))
         {
             c++;
           if(c==1)
           {
            printf("%d",i);
           }
           else
            printf(" %d",i);
         }
    }
		return 0;
}
