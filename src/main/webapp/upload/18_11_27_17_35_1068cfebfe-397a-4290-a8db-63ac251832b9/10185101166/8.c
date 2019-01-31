#include<stdio.h>
int main()
{
   int a[100] , b , c , m = 1 ,n = 1;
   scanf("%d",&b);
   
   for(c = 0;c < b;c++)
   {
   	 scanf("%d",&a[c]);
   }
   
   for(c = 1;c < b;c++)
    {
        if(a[c] == a[c-1])
        {
            n++;
            if(n > m)
            m = n;
        }
        else
        {
        	n = 1;
		}
    }
    printf("%d",m);
}