#include<stdio.h>
int main(void)
{   unsigned int n;
    scanf("%u",&n);
    for(unsigned int a=0;a<n;a++)
    printf("*");
    for(unsigned int a=0;a<n-2;a++)
    {printf("\n*");
    for(unsigned int a=0;a<n-2;a++)
    printf(" ");
    printf("*");}
    printf("\n");
    for(unsigned int a=0;a<n;a++)
    printf("*");
    return 0;
}
