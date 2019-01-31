#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    printf("*\n");
    for(a=1;a<n-1;a++)
    { 
        printf("*");
        for(b=1;b<a;b++)
        {
            printf(" ");
        }
		printf("*\n");
    }
    for(a=0;a<n;a++)
    { 
        printf("*");
    }
    return 0;
}
