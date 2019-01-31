#include<stdio.h>
int f()
{
    static i=1,j=1;
    int b;
    scanf("%d",&b);
    j++;
    if(b>0)
   {
     f();
     i++;
     if(i<j-1)
    printf("%d ",b);
    if(i>=j-1)
     printf("%d",b);
   }
}
int main(void)
{
	f();
	return 0;
}