#include <stdio.h>
int main()
{
    int s=1,h;
    int a,b;
    scanf("%d", &h);
    printf("1\n");
    for (a=2;a<=h;s=1,a++)
    {
        printf("1 ");
        for (b=1;b<=a-2;b++)
        {
            s=s*(a-b)/b;
            printf("%d ", s);
        }
       if(a==h) 
		   printf("1");
		else
		   printf("1\n");
    }
}